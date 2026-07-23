/*
 * XREFs of MmFlushImageSection @ 0x14034DE00
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x14028B880 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312010 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x14035F0D0 (MiAttemptSectionDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  unsigned __int64 v4; // rbx
  volatile LONG *DataSectionObject; // rsi
  PVOID ImageSectionObject; // rsi
  BOOLEAN result; // al
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v16; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // edx
  _DWORD *v21; // r9

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C65640);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile LONG *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
          goto LABEL_14;
        if ( *((_QWORD *)DataSectionObject + 6)
          || (DataSectionObject[14] & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
          ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v4 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v12 = (v16 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v16;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          result = 0;
          goto LABEL_6;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      }
    }
    ImageSectionObject = SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
      if ( (_DWORD)KiIrqlFlags )
      {
        v18 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v21 = v19->SchedulerAssist;
          v12 = (v20 & v21[5]) == 0;
          v21[5] &= v20;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      result = 1;
LABEL_6:
      __writecr8(v4);
      return result;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
LABEL_14:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
    if ( (_DWORD)KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    __writecr8(v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
  LOBYTE(v13) = v4;
  return MiAttemptSectionDelete(ImageSectionObject, v13, 0LL);
}

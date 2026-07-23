/*
 * XREFs of MmFlushImageSection @ 0x14023E840
 * Callers:
 *     sub_14027F9DC @ 0x14027F9DC (sub_14027F9DC.c)
 * Callees:
 *     sub_14023EA5C @ 0x14023EA5C (sub_14023EA5C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  unsigned __int64 v4; // rbx
  volatile LONG *DataSectionObject; // rsi
  char *ImageSectionObject; // rsi
  BOOLEAN result; // al
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v16; // eax
  __int64 v17; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // edx
  __int64 v21; // r9

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile LONG *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
          goto LABEL_16;
        if ( *((_QWORD *)DataSectionObject + 6)
          || (DataSectionObject[14] & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
          ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
                v17 = *((_QWORD *)CurrentPrcb + 4375);
                v13 = (v16 & *(_DWORD *)(v17 + 20)) == 0;
                *(_DWORD *)(v17 + 20) &= v16;
                if ( v13 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          result = 0;
          goto LABEL_6;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      }
    }
    ImageSectionObject = (char *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v21 = *((_QWORD *)v19 + 4375);
            v13 = (v20 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v20;
            if ( v13 )
              sub_140418E4C(v19);
          }
        }
      }
      result = 1;
LABEL_6:
      __writecr8(v4);
      return result;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 72) )
      break;
LABEL_16:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(v10);
        }
      }
    }
    __writecr8(v4);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  LOBYTE(v8) = v4;
  return sub_14023EA5C(ImageSectionObject, v8, 0LL);
}

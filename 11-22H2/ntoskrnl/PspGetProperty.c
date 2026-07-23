/*
 * XREFs of PspGetProperty @ 0x14033264C
 * Callers:
 *     PspGetJobProperty @ 0x1403325E4 (PspGetJobProperty.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     PspFindPropertySetEntry @ 0x1403326E4 (PspFindPropertySetEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspGetProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int64 *v3; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // rbp
  __int64 PropertySetEntry; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (volatile signed __int64 *)(a1 + 16);
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = PspFindPropertySetEntry(a1, a2);
  v10 = PropertySetEntry;
  if ( PropertySetEntry )
    ObfReferenceObjectWithTag(*(PVOID *)(PropertySetEntry + 24), 0x72507350u);
  KxReleaseSpinLock(v3);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  if ( v10 )
    *a3 = *(_QWORD *)(v10 + 24);
  else
    return (unsigned int)-1073741275;
  return v7;
}

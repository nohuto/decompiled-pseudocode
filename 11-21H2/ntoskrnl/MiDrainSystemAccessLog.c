/*
 * XREFs of MiDrainSystemAccessLog @ 0x1402829D0
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140216B04 (MiDeleteSessionAddressSpace.c)
 *     MiCleanWorkingSet @ 0x14024E9E0 (MiCleanWorkingSet.c)
 *     MiDecrementPartialVadSubsections @ 0x1402ED0C4 (MiDecrementPartialVadSubsections.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403D2280 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiDrainSystemAccessLog(__int64 a1)
{
  _QWORD *v1; // rbx
  char result; // al
  unsigned __int8 CurrentIrql; // di
  __int64 SharedVm; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v1 = &unk_140C53D28;
  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result != 2 )
    v1 = (_QWORD *)(a1 + 232);
  if ( *v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    SharedVm = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
    if ( *v1 )
    {
      MiEmptyPageAccessLog(*v1, v6);
      *v1 = 0LL;
    }
    v7 = MiGetSharedVm(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

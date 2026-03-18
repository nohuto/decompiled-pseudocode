/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x14029251C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     KiInSwapProcesses @ 0x14034D08C (KiInSwapProcesses.c)
 *     MiCreatePfnTemplate @ 0x140375554 (MiCreatePfnTemplate.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
 *     MiInitializeBootProcess @ 0x140B43C94 (MiInitializeBootProcess.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MxInsertEnclaveBootPages @ 0x140B99E40 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  if ( a3 )
    v5 = 17;
  else
    v5 = MiLockPageInline(a1);
  result = 0xFFFFFFFFFFE0000LL;
  *(_QWORD *)a1 ^= (*(_QWORD *)a1 ^ (a2 << 13)) & 0xFFFFFFFFFFE0000LL;
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}

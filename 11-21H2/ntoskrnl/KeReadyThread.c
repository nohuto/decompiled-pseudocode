/*
 * XREFs of KeReadyThread @ 0x140293184
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x14021158C (KiInSwapSingleProcess.c)
 *     KiFastReadyThread @ 0x140294574 (KiFastReadyThread.c)
 */

char __fastcall KeReadyThread(_KTHREAD *a1)
{
  __int64 Process; // rdx
  char result; // al
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11

  Process = (__int64)a1->ApcState.Process;
  if ( (*(_DWORD *)(Process + 840) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  result = KiInSwapSingleProcess(a1, Process, CurrentIrql);
  if ( !result )
    return KiFastReadyThread(a1);
  return result;
}

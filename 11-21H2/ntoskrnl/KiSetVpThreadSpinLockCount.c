/*
 * XREFs of KiSetVpThreadSpinLockCount @ 0x1402B1050
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KxDispatchInterrupt @ 0x140428BA0 (KxDispatchInterrupt.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiSetVpThreadSpinLockCount(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 35000);
  if ( v2 && *(_BYTE *)(a1 + 32) <= 1u )
  {
    v4 = *(_DWORD *)(v2 + 24);
    v5 = v4 - 1;
    v6 = v4 + 1;
    if ( !a2 )
      v6 = v5;
    *(_DWORD *)(v2 + 24) = v6;
    if ( !v6 )
      KiRemoveSystemWorkPriorityKick(a1);
  }
}

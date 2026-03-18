/*
 * XREFs of TtmpCloseTerminalHandle @ 0x1409AB760
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     TtmiLogTerminalHandleClosed @ 0x1409AA4C4 (TtmiLogTerminalHandleClosed.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409ABA30 (TtmpSetTerminalPendingCleanup.c)
 */

void __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v6 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  PsGetProcessId(Process);
  TtmiLogTerminalHandleClosed(v6);
}

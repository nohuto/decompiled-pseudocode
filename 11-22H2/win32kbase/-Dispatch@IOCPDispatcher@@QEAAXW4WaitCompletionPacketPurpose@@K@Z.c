/*
 * XREFs of ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C00557A0
 * Callers:
 *     UserKSTWait @ 0x1C0055434 (UserKSTWait.c)
 *     UserDispatchMITCompletion @ 0x1C00579A4 (UserDispatchMITCompletion.c)
 * Callees:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C005779C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0057904 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 */

void __fastcall IOCPDispatcher::Dispatch(IOCPDispatcher *a1, int a2, unsigned int a3)
{
  if ( a2 == 1 )
  {
    IOCPDispatcher::HandleSensorDispatcherSignal(a1, a3);
  }
  else if ( a2 == 2 )
  {
    IOCPDispatcher::HandleThreadDispatcherSignal(a1, a3);
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a2, a3, 0LL, 0LL, 0LL, 0LL, 0);
  }
}

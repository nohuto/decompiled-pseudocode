/*
 * XREFs of InitDwmInputProcessing @ 0x1C00BB0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitDwmInputProcessing()
{
  unsigned int v0; // ebx

  v0 = -1073741801;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)CreateKernelEvent(1LL, 0LL);
  ghMITEvent = hCreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)hCreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)CreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.Dpc.ProcessorHistory = CreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)CreateKernelEvent(1LL, 0LL);
  gcDITMouseInjectionWaiters = 0;
  gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  if ( WPP_MAIN_CB.Dpc.DeferredRoutine
    && ghMITEvent
    && WPP_MAIN_CB.Dpc.DeferredContext
    && WPP_MAIN_CB.Dpc.SystemArgument2
    && WPP_MAIN_CB.Dpc.ProcessorHistory
    && WPP_MAIN_CB.Dpc.DpcListEntry.Next
    && gpsemDITMouseInjectionWaiters )
  {
    return (unsigned int)CInputManager::CreateSessionGlobal();
  }
  return v0;
}

/*
 * XREFs of HampConnectionDestroy @ 0x180006630
 * Callers:
 *     HamConnectToServerEx @ 0x180002CD0 (HamConnectToServerEx.c)
 *     HampConnectionCreate @ 0x180004700 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x1800065B0 (HamConnectForExtendedExecution.c)
 *     HamDisconnectForFullTrust @ 0x180006970 (HamDisconnectForFullTrust.c)
 *     HamConnectForStateChangeNotifications @ 0x180009F10 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForSessionState @ 0x18000A290 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x18000A300 (HamConnectForDebugging.c)
 *     HamConnectForServicing @ 0x18000A390 (HamConnectForServicing.c)
 *     HamConnectForFullTrust @ 0x18001CA50 (HamConnectForFullTrust.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001DFB0 (HampCltDelayCloseContextDestroy.c)
 * Callees:
 *     HampConnectionCleanup @ 0x180006684 (HampConnectionCleanup.c)
 *     HamIpcChannelRundown @ 0x1800067DC (HamIpcChannelRundown.c)
 *     RmpClientWnfDestroySubscription @ 0x180006870 (RmpClientWnfDestroySubscription.c)
 */

BOOLEAN __fastcall HampConnectionDestroy(__int64 a1)
{
  int v1; // eax
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 >= 0 )
  {
    if ( v1 > 3 )
    {
      if ( v1 == 6 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( v4 )
          RmpClientWnfDestroySubscription(v4);
      }
    }
    else
    {
      HamIpcChannelRundown(a1 + 16);
    }
  }
  HampConnectionCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}

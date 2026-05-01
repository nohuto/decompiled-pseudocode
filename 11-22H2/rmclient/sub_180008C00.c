/*
 * XREFs of sub_180008C00 @ 0x180008C00
 * Callers:
 *     HamDisconnectFromServer @ 0x180002D40 (HamDisconnectFromServer.c)
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     HamConnectForExtendedExecution @ 0x1800036B0 (HamConnectForExtendedExecution.c)
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 *     HamDisconnectForStateChangeNotifications @ 0x180008B60 (HamDisconnectForStateChangeNotifications.c)
 *     HamConnectForStateChangeNotifications @ 0x180009FF0 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForDebugging @ 0x18000A3A0 (HamConnectForDebugging.c)
 *     HamConnectForSessionState @ 0x18000A430 (HamConnectForSessionState.c)
 *     HamConnectForServicing @ 0x18000A4A0 (HamConnectForServicing.c)
 *     HamConnectForFullTrust @ 0x18001D420 (HamConnectForFullTrust.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 * Callees:
 *     sub_180008C74 @ 0x180008C74 (sub_180008C74.c)
 *     sub_180008D10 @ 0x180008D10 (sub_180008D10.c)
 *     sub_180008E08 @ 0x180008E08 (sub_180008E08.c)
 */

BOOLEAN __fastcall sub_180008C00(__int64 a1)
{
  __int64 v2; // rcx

  if ( !*(_BYTE *)(a1 + 156) || *(_BYTE *)(a1 + 156) == 1 || *(_BYTE *)(a1 + 156) == 2 || *(_BYTE *)(a1 + 156) == 3 )
  {
    sub_180008C74(a1 + 24);
  }
  else if ( *(_BYTE *)(a1 + 156) == 6 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      sub_180008D10(v2);
  }
  sub_180008E08(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}

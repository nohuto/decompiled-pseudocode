/*
 * XREFs of sub_1800010E0 @ 0x1800010E0
 * Callers:
 *     HamDisconnectFromServer @ 0x180002D40 (HamDisconnectFromServer.c)
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     HamDisconnectForStateChangeNotifications @ 0x180008B60 (HamDisconnectForStateChangeNotifications.c)
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 *     RmDisconnectProcessManager @ 0x18001C400 (RmDisconnectProcessManager.c)
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800010E0(__int64 a1, __int64 a2)
{
  return (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24);
}

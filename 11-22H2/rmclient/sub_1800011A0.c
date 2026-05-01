/*
 * XREFs of sub_1800011A0 @ 0x1800011A0
 * Callers:
 *     HamDisconnectFromServer @ 0x180002D40 (HamDisconnectFromServer.c)
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     HamDisconnectForStateChangeNotifications @ 0x180008B60 (HamDisconnectForStateChangeNotifications.c)
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180012BD0 @ 0x180012BD0 (sub_180012BD0.c)
 *     sub_180013C10 @ 0x180013C10 (sub_180013C10.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 *     HamCompleteActivityRestore @ 0x180014870 (HamCompleteActivityRestore.c)
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 *     RmDisconnectProcessManager @ 0x18001C400 (RmDisconnectProcessManager.c)
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800011A0(__int64 a1, unsigned __int8 *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  return sub_180001104(a1, a2, 0LL, 0LL, 2u, &v3);
}

/*
 * XREFs of sub_180001340 @ 0x180001340
 * Callers:
 *     HamDisconnectFromServer @ 0x180002D40 (HamDisconnectFromServer.c)
 *     HamDisconnectForStateChangeNotifications @ 0x180008B60 (HamDisconnectForStateChangeNotifications.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     HamCompleteActivityRestore @ 0x180014870 (HamCompleteActivityRestore.c)
 *     sub_18001EA7C @ 0x18001EA7C (sub_18001EA7C.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001340(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v13 = 0;
  v12 = 8;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return sub_180001104(a1, a2, 0LL, 0LL, 4u, &v7);
}

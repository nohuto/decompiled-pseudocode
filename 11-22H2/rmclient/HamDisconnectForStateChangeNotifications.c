/*
 * XREFs of HamDisconnectForStateChangeNotifications @ 0x180008B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_180001340 @ 0x180001340 (sub_180001340.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 */

__int64 __fastcall HamDisconnectForStateChangeNotifications(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_180032038 > 4 && sub_1800010E0((__int64)&dword_180032038, 1LL) )
    sub_1800011A0((__int64)&dword_180032038, byte_18002A8CF);
  sub_180008C00(a1);
  if ( (unsigned int)dword_180032038 > 4 && sub_1800010E0((__int64)&dword_180032038, 3LL) )
  {
    v5 = 0;
    v6 = a1;
    sub_180001340((__int64)&dword_180032038, byte_18002A8F0, v2, v3, (__int64)&v5, (__int64)&v6);
  }
  return 0LL;
}

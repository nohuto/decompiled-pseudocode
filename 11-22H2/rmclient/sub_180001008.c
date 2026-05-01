/*
 * XREFs of sub_180001008 @ 0x180001008
 * Callers:
 *     sub_180012BD0 @ 0x180012BD0 (sub_180012BD0.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001008(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 1;
  return sub_180001104((int)&dword_180032000, a2, 0, 0, 3u, &v6);
}

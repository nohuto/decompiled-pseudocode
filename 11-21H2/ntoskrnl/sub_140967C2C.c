/*
 * XREFs of sub_140967C2C @ 0x140967C2C
 * Callers:
 *     sub_1402F5DDC @ 0x1402F5DDC (sub_1402F5DDC.c)
 *     sub_1402F63D0 @ 0x1402F63D0 (sub_1402F63D0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140967908 @ 0x140967908 (sub_140967908.c)
 */

__int64 __fastcall sub_140967C2C(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+34h] [rbp-24h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v5 = 0;
  v7 = 0;
  v1 = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
  v6 = a1;
  v4 = 5;
  v3 = v1;
  return sub_140967908((__int64)&v3, 0x20u);
}

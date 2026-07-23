/*
 * XREFs of sub_140967A0C @ 0x140967A0C
 * Callers:
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140967908 @ 0x140967908 (sub_140967908.c)
 */

__int64 __fastcall sub_140967A0C(int a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+34h] [rbp-24h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v6 = 0;
  v2 = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
  v7 = a1;
  v8 = a2;
  v4 = v2;
  v5 = 8;
  return sub_140967908((__int64)&v4, 0x20u);
}

/*
 * XREFs of sub_140967D90 @ 0x140967D90
 * Callers:
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140967908 @ 0x140967908 (sub_140967908.c)
 */

__int64 __fastcall sub_140967D90(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+34h] [rbp-24h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v6 = 0;
  v8 = 0;
  v1 = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
  v2 = *(_DWORD *)(a1 + 264);
  v5 = 3;
  v4 = v1;
  v7 = v2;
  return sub_140967908((__int64)&v4, 0x20u);
}

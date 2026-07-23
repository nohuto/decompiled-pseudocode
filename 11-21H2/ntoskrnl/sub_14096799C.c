/*
 * XREFs of sub_14096799C @ 0x14096799C
 * Callers:
 *     sub_14074E85C @ 0x14074E85C (sub_14074E85C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140967908 @ 0x140967908 (sub_140967908.c)
 */

__int64 __fastcall sub_14096799C(__int64 a1)
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
  v5 = 9;
  v4 = v1;
  v7 = v2;
  return sub_140967908((__int64)&v4, 0x1Cu);
}

/*
 * XREFs of sub_140260054 @ 0x140260054
 * Callers:
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 * Callees:
 *     sub_1402608AC @ 0x1402608AC (sub_1402608AC.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140260054(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  _QWORD v10[20]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 3221225643LL;
  if ( *(_QWORD *)(v3 + 8) <= *(_QWORD *)(v3 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v10, 0, 0x98uLL);
  v10[0] = v3;
  v7 = sub_14026DFC0(4LL);
  v8 = *(_OWORD *)(a1 + 64);
  v10[2] = v7;
  v10[3] = a2;
  *(_OWORD *)&v10[5] = v8;
  sub_1402608AC(v7, 0, a3 << 25 >> 16, a3 << 25 >> 16, (__int64)v10);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v10[5];
  return result;
}

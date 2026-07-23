/*
 * XREFs of sub_14058154C @ 0x14058154C
 * Callers:
 *     sub_140580FA4 @ 0x140580FA4 (sub_140580FA4.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14058154C(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-79h] BYREF
  __m128i v9[11]; // [rsp+30h] [rbp-69h] BYREF

  v8 = 0LL;
  memset(v9, 0, sizeof(v9));
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v9[10].m128i_i64[1] = (__int64)&v8;
  v4 += 1664LL;
  v9[9].m128i_i64[1] = (__int64)&sub_140581640;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  v9[0].m128i_i32[0] = 7;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v9[2].m128i_i64[0] = v5 << 12;
  v9[2].m128i_i64[1] = v6;
  v9[1].m128i_i64[1] = v4;
  v9[0].m128i_i8[7] = sub_1402CF4F0(v4);
  sub_14030CF90(v9);
  sub_1402B0CE0(v4, v9[0].m128i_u8[7]);
  return v8;
}

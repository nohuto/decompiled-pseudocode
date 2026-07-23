/*
 * XREFs of sub_1405BB84C @ 0x1405BB84C
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 * Callees:
 *     sub_14026C124 @ 0x14026C124 (sub_14026C124.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_BOOL8 __fastcall sub_1405BB84C(__int64 a1, _QWORD *a2)
{
  __m128i si128; // xmm0
  __int64 v5; // rax

  memset(a2, 0, 0x48uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_14001C760);
  *(__m128i *)(a2 + 1) = si128;
  a2[3] = si128.m128i_i64[0];
  *a2 = a1;
  v5 = sub_14026C124(0LL, 0LL, 1073741856, 2);
  a2[7] = v5;
  return v5 != 0;
}

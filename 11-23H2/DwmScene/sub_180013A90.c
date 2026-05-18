/*
 * XREFs of sub_180013A90 @ 0x180013A90
 * Callers:
 *     sub_1800166AC @ 0x1800166AC (sub_1800166AC.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_180013A90(__int64 a1, _QWORD *a2)
{
  sub_1800124F8((__int64 *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 52) = 0;
  return 0LL;
}

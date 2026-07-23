/*
 * XREFs of sub_140424FF0 @ 0x140424FF0
 * Callers:
 *     sub_14026C038 @ 0x14026C038 (sub_14026C038.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14026FB78 @ 0x14026FB78 (sub_14026FB78.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_140590A18 @ 0x140590A18 (sub_140590A18.c)
 *     sub_1405952D8 @ 0x1405952D8 (sub_1405952D8.c)
 *     sub_140599780 @ 0x140599780 (sub_140599780.c)
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1406F367C @ 0x1406F367C (sub_1406F367C.c)
 *     sub_140B51C0C @ 0x140B51C0C (sub_140B51C0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140424FF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3

  result = -4096LL;
  v3 = a2 + 4096;
  v4 = a1 + 4096;
  do
  {
    v5 = *(__m128i *)(v3 + result + 16);
    v6 = *(__m128i *)(v3 + result + 32);
    v7 = *(__m128i *)(v3 + result + 48);
    _mm_stream_si128((__m128i *)(v4 + result), *(__m128i *)(v3 + result));
    _mm_stream_si128((__m128i *)(v4 + result + 16), v5);
    _mm_stream_si128((__m128i *)(v4 + result + 32), v6);
    _mm_stream_si128((__m128i *)(v4 + result + 48), v7);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}

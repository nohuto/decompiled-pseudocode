/*
 * XREFs of MiInitializeForkMaps @ 0x1406655F4
 * Callers:
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  __m128i si128; // xmm0
  __int64 v5; // rax

  memset(a2, 0, 0x48uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)(a2 + 1) = si128;
  a2[3] = si128.m128i_i64[0];
  *a2 = a1;
  v5 = MiMapSinglePage(0LL, 0LL, 1073741856, 2);
  a2[7] = v5;
  return v5 != 0;
}

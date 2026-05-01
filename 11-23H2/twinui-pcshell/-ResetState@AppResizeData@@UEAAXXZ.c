/*
 * XREFs of ?ResetState@AppResizeData@@UEAAXXZ @ 0x1801C3C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeData::ResetState(__m128i *this)
{
  this[4] = _mm_load_si128((const __m128i *)&_xmm);
  this[5].m128i_i32[0] = 0;
  this[1].m128i_i64[1] = 0x7FFFFFFF7FFFFFFFLL;
}

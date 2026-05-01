/*
 * XREFs of ??$?8GU?$char_traits@G@std@@@std@@YA_NV?$basic_string_view@GU?$char_traits@G@std@@@0@0@Z @ 0x18038BDBC
 * Callers:
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x18069F680 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator==<unsigned short,std::char_traits<unsigned short>>(__int64 *a1, __m128i *a2)
{
  return std::_Traits_equal<std::char_traits<unsigned short>>(
           *a1,
           a1[1],
           a2->m128i_i64[0],
           _mm_srli_si128(*a2, 8).m128i_i64[0]);
}

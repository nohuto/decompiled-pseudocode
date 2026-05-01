/*
 * XREFs of ??$?9GU?$char_traits@G@std@@$00@std@@YA_NV?$basic_string_view@GU?$char_traits@G@std@@@0@0@Z @ 0x180699B48
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

bool __fastcall std::operator!=<unsigned short,std::char_traits<unsigned short>,1>(__int64 *a1, __m128i *a2)
{
  return !std::_Traits_equal<std::char_traits<unsigned short>>(
            *a1,
            a1[1],
            a2->m128i_i64[0],
            _mm_srli_si128(*a2, 8).m128i_i64[0]);
}

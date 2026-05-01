/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1800FC0F8
 * Callers:
 *     ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x180024D44 (-SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z.c)
 *     ??0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F0CC (--0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803812DC (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18057C7B0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FC164 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180126F80 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

__int64 __fastcall winrt::operator==(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm6
  __int64 v3; // r9
  __m128i *v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(a2, v6);
  v4 = (__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(v3, v7);
  return std::_Traits_equal<std::char_traits<unsigned short>>(
           v4->m128i_i64[0],
           _mm_srli_si128(*v4, 8).m128i_u64[0],
           v2.m128i_i64[0],
           _mm_srli_si128(v2, 8).m128i_u64[0]);
}

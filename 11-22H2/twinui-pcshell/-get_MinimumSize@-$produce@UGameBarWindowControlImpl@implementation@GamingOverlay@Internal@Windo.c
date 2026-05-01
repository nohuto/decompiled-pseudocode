/*
 * XREFs of ?get_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x180412870
 * Callers:
 *     <none>
 * Callees:
 *     ?MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUSize@Foundation@56@XZ @ 0x180410250 (-MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_MinimumSize(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MinimumSize(
         (a1 - 16) & -(__int64)(a1 != 0),
         &v5);
  *a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)v3, (__m128)*((unsigned int *)v3 + 1)).m128_u64[0];
  return 0LL;
}

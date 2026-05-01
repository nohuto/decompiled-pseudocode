/*
 * XREFs of ?get_OccludingViewRect@?$produce@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@4567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18052EF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::get_OccludingViewRect(
        __int64 a1,
        __m128i *a2)
{
  __int64 v2; // rax

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 48LL;
  *a2 = _mm_loadu_si128((const __m128i *)v2);
  return 0LL;
}

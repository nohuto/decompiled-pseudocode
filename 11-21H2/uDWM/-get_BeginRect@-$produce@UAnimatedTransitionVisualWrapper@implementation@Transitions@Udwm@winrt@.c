/*
 * XREFs of ?get_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180008310
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180008350 (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::get_BeginRect(
        __int64 a1,
        __m128i *a2)
{
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    *a2 = _mm_loadu_si128((const __m128i *)winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginRect());
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v3);
  }
  return result;
}

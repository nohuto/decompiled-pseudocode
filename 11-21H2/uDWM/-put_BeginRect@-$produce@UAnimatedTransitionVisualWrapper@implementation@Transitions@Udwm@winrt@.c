/*
 * XREFs of ?put_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180045690
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180047690 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::put_BeginRect(
        unsigned __int64 a1,
        const __m128i *a2)
{
  CAnimatedTransitionVisual **v3; // rbx
  __m128 v4; // xmm2
  float v5; // xmm1_4
  __int64 result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CAnimatedTransitionVisual **)((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive((winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)v3);
    v4 = (__m128)_mm_loadu_si128(a2);
    v7.left = (int)v4.m128_f32[0];
    v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
    v7.top = (int)v5;
    v7.right = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
    v7.bottom = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v5);
    CAnimatedTransitionVisual::SetBeginRect(v3[5], &v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}

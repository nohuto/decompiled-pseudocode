/*
 * XREFs of ?put_EndRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180008610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180047690 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::put_EndRect(
        unsigned __int64 a1,
        const __m128i *a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v3; // rbx
  __m128 v4; // xmm2
  float v5; // xmm1_4
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(v3);
    v4 = (__m128)_mm_loadu_si128(a2);
    LODWORD(v8) = (int)v4.m128_f32[0];
    v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
    DWORD1(v8) = (int)v5;
    DWORD2(v8) = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
    HIDWORD(v8) = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v5);
    v6 = *((_QWORD *)v3 + 5);
    *(_OWORD *)(v6 + 872) = v8;
    CVisual::SetDirtyFlags((CVisual *)(v6 + 8), 0x1000u);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v9);
  }
  return result;
}

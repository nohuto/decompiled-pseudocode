/*
 * XREFs of ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800F0BF4
 * Callers:
 *     ?put_BeginClip@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800F1850 (-put_BeginClip@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180047690 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginClip(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        const __m128i *a2)
{
  __m128 v4; // xmm2
  __int64 v5; // rcx
  float v6; // xmm1_4
  __int128 v7; // [rsp+20h] [rbp-18h]

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(this);
  v4 = (__m128)_mm_loadu_si128(a2);
  v5 = *((_QWORD *)this + 5);
  LODWORD(v7) = (int)v4.m128_f32[0];
  v6 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  DWORD1(v7) = (int)v6;
  DWORD2(v7) = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
  HIDWORD(v7) = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v6);
  *(_OWORD *)(v5 + 888) = v7;
  *(_OWORD *)(v5 + 824) = v7;
  CVisual::SetDirtyFlags((CVisual *)(v5 + 8), 4096);
}

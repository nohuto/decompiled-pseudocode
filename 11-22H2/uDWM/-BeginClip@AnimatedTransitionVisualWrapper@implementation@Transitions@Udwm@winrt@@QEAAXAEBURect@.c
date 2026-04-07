/*
 * XREFs of ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800ED564
 * Callers:
 *     ?put_BeginClip@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800EE9F0 (-put_BeginClip@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800ED890 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::BeginClip(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        const __m128i *a2)
{
  __m128 v4; // xmm2
  float v5; // xmm1_4
  __int64 v6; // rax
  CVisual *v7; // rcx
  int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-18h]

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(this);
  v4 = (__m128)_mm_loadu_si128(a2);
  LODWORD(v9) = (int)v4.m128_f32[0];
  v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  DWORD1(v9) = (int)v5;
  DWORD2(v9) = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
  HIDWORD(v9) = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v5);
  v6 = *((_QWORD *)this + 5);
  v7 = (CVisual *)(v6 + 8);
  *(_OWORD *)(v6 + 888) = v9;
  *(_OWORD *)(v6 + 824) = v9;
  v8 = *(_DWORD *)(v6 + 96);
  if ( (v8 & 0x1000) == 0 )
  {
    *((_DWORD *)v7 + 22) = v8 | 0x1000;
    CVisual::PropagateDirtyChildren(v7);
  }
}

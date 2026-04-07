/*
 * XREFs of ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800FF81C
 * Callers:
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800FF584 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?put_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800FFE60 (-put_Rect@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@.c)
 * Callees:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18009B538 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        const __m128i *a2)
{
  CDesktopManager *v2; // rax
  CAcrylicSheet *v3; // rcx
  __m128 v4; // xmm4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  *(__m128i *)((char *)this + 52) = *a2;
  v3 = (CAcrylicSheet *)*((_QWORD *)this + 4);
  v4 = (__m128)_mm_loadu_si128(a2);
  LODWORD(v2) = (int)(*((double *)v2 + 51) * 8.0);
  v5 = (float)(int)v2 + _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v6 = (float)(int)v2 + v4.m128_f32[0];
  v7 = (float)(2 * (int)v2);
  v8.left = (int)v6;
  v8.top = (int)v5;
  v8.right = (int)(float)((float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] - v7) + v6);
  v8.bottom = (int)(float)((float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] - v7) + v5);
  CAcrylicSheet::UpdateRect(v3, &v8);
}

/*
 * XREFs of ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180470C24
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x18045E2C0 (-GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
        KeyboardHosting::TabTipAdapter *this,
        struct tagRECT *a2)
{
  bool IsRectNull; // al
  __int64 v3; // r9
  __m128 v4; // xmm2
  _DWORD *v5; // r10
  float v6; // xmm1_4
  __int64 result; // rax
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v8 = *((_OWORD *)this + 32);
  IsRectNull = KeyboardHosting::IsRectNull(v8);
  v4 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 16 * (!IsRectNull + 31LL)));
  *v5 = (int)v4.m128_f32[0];
  v6 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  result = 0LL;
  v5[1] = (int)v6;
  v5[2] = (int)(float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] + v4.m128_f32[0]);
  v5[3] = (int)(float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] + v6);
  return result;
}

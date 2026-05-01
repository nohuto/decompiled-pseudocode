/*
 * XREFs of ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180523008
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x18050FEA0 (-GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
        KeyboardHosting::TabTipAdapter *this,
        struct tagRECT *a2)
{
  bool IsRectNull; // al
  __int64 v3; // r10
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // r8d
  float v7; // xmm1_4
  _DWORD *v8; // r11
  __int64 result; // rax

  IsRectNull = KeyboardHosting::IsRectNull(
                 (KeyboardHosting::TabTipAdapter *)((char *)this + 456),
                 (const struct Windows::Foundation::Rect *)a2);
  v4 = *(float *)(v3 + 16 * !IsRectNull + 444);
  v5 = *(float *)(v3 + 16 * !IsRectNull + 440) + *(float *)(v3 + 16 * !IsRectNull + 448);
  v6 = (int)v4;
  v7 = v4 + *(float *)(v3 + 16 * !IsRectNull + 452);
  *v8 = (int)*(float *)(v3 + 16 * !IsRectNull + 440);
  result = 0LL;
  v8[1] = v6;
  v8[2] = (int)v5;
  v8[3] = (int)v7;
  return result;
}

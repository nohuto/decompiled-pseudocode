/*
 * XREFs of ?GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180097930
 * Callers:
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800E4B0C (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCached.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18009798C (-GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCach.c)
 */

__int64 __fastcall CAccent::GetAccentBlurBehindBrush(
        CAccent *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct MilPoint3F *a4)
{
  CAccentBlurBehind *v4; // rcx
  int AccentBlurBehindBrush; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 72) != 3 )
    return 0LL;
  v4 = (CAccentBlurBehind *)*((_QWORD *)this + 43);
  if ( !v4 )
    return 0LL;
  AccentBlurBehindBrush = CAccentBlurBehind::GetAccentBlurBehindBrush(v4, a2, a3, a4);
  v6 = AccentBlurBehindBrush;
  if ( AccentBlurBehindBrush >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E2,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)AccentBlurBehindBrush);
  return v6;
}

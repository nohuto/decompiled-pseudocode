/*
 * XREFs of ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x180017068
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A756C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x180017974 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateBrush(CAnimatedTransitionVisual *this, struct CBaseImageProxy *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+70h] [rbp-38h] BYREF
  __int128 v7; // [rsp+80h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 74);
  v7 = _xmm;
  v6 = _xmm;
  v3 = CImageLegacyMilBrushProxy::Update(v2, a2, &v7, &v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x348u, 0LL);
  return v4;
}

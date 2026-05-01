/*
 * XREFs of ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18052F5D8
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N00$$QEAI1@Z @ 0x18052F2E8 (--$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger.c)
 *     ?ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z @ 0x18052F3C4 (-ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z.c)
 *     ?GetForegroundAppPhysicalRect@ViewRectHelper@KeyboardHosting@@SAJPEAUtagRECT@@@Z @ 0x18052F8A8 (-GetForegroundAppPhysicalRect@ViewRectHelper@KeyboardHosting@@SAJPEAUtagRECT@@@Z.c)
 */

_DWORD *__fastcall KeyboardHosting::AnimationCoordinationHelper::ComputePrimaryViewAnimationDurations(
        _DWORD *a1,
        unsigned __int8 a2,
        char a3,
        const RECT *a4)
{
  double v8; // xmm6_8
  double v9; // xmm7_8
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v12; // eax
  _DWORD *result; // rax
  char v14[8]; // [rsp+38h] [rbp-39h] BYREF
  char v15[8]; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int8 v16[8]; // [rsp+48h] [rbp-29h] BYREF
  int v17; // [rsp+50h] [rbp-21h] BYREF
  int v18; // [rsp+54h] [rbp-1Dh] BYREF
  RECT rcSrc2; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-9h] BYREF

  v16[0] = a2;
  v15[0] = a3;
  v14[0] = 0;
  v8 = 0.0;
  v9 = 0.0;
  rcSrc2 = 0LL;
  if ( !a3 || (unsigned int)KeyboardHosting::ViewRectHelper::GetForegroundAppPhysicalRect(&rcSrc2) )
  {
    if ( a2 )
      v12 = 2500000;
    else
      v12 = a3 != 0 ? 1670000 : 830000;
    v9 = (double)v12 - 100000.0;
  }
  else if ( IntersectRect(&rcDst, a4, &rcSrc2) )
  {
    v10 = (float)(rcDst.bottom - rcDst.top);
    v11 = v10 / (float)(a4->bottom - a4->top);
    if ( a2 )
    {
      if ( (float)(v10 / (float)(rcSrc2.bottom - rcSrc2.top)) >= 0.6 )
      {
        v14[0] = 1;
      }
      else
      {
        v9 = KeyboardHosting::AnimationCoordinationHelper::ComputeCubicBezierProgress(a2, 1.0 - v11) * 2500000.0
           + 100000.0;
        v8 = 2500000.0 - v9;
      }
    }
    else
    {
      v8 = KeyboardHosting::AnimationCoordinationHelper::ComputeCubicBezierProgress(0, v11) * 1670000.0;
      v9 = 1670000.0 - v8;
    }
  }
  v17 = (int)v8;
  v18 = (int)v9;
  TouchKeyboardExperienceTelemetryLogger::ComputePrimaryViewAnimationDurations<bool &,bool &,bool &,unsigned int,unsigned int>(
    v16,
    v15,
    v14,
    &v18,
    &v17);
  result = a1;
  *a1 = (int)v8;
  a1[1] = (int)v9;
  return result;
}

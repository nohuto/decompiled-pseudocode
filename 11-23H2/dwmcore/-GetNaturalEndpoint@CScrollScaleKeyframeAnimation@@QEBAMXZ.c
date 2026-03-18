/*
 * XREFs of ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18026616C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x180231028 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180232540 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetNaturalEndpoint(
        CScrollScaleKeyframeAnimation *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 668) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
  if ( *((_DWORD *)this + 166) != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
  return *((float *)this + 148);
}

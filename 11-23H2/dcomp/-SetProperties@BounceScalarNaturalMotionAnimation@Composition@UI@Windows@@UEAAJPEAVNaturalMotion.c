/*
 * XREFs of ?SetProperties@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProperties@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180167730 (-SetProperties@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimat.c)
 *     ?SetProperties@Bounce@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z @ 0x180167C44 (-SetProperties@Bounce@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::BounceScalarNaturalMotionAnimation::SetProperties(
        Windows::UI::Composition::BounceScalarNaturalMotionAnimation *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::ScalarNaturalMotionAnimation::SetProperties(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Windows::UI::Composition::Bounce::SetProperties(
      (Windows::UI::Composition::BounceScalarNaturalMotionAnimation *)((char *)this + 440),
      a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtBounceScalarNaturalMotionAnimation.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

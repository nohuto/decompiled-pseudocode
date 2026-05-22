/*
 * XREFs of ?SetProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProperties@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180168690 (-SetProperties@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnima.c)
 *     ?SetProperties@Spring@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z @ 0x180169390 (-SetProperties@Spring@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SpringVector3NaturalMotionAnimation::SetProperties(
        Windows::UI::Composition::SpringVector3NaturalMotionAnimation *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::Vector3NaturalMotionAnimation::SetProperties(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Windows::UI::Composition::Spring::SetProperties(
      (Windows::UI::Composition::SpringVector3NaturalMotionAnimation *)((char *)this + 464),
      a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtSpringVector3NaturalMotionAnimation.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

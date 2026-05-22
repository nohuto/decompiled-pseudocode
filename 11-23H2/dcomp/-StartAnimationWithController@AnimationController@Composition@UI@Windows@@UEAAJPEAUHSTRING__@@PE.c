/*
 * XREFs of ?StartAnimationWithController@AnimationController@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV1234@@Z @ 0x18011BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::StartAnimationWithController(
        Windows::UI::Composition::AnimationController *this,
        HSTRING a2,
        struct Windows::UI::Composition::CompositionAnimation *a3,
        struct Windows::UI::Composition::AnimationController *a4)
{
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a4 != this )
    return Windows::UI::Composition::ProxyObject::StartAnimationWithController(this, a2, a3, a4);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x102,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationcontroller.cpp",
    (const char *)0x8000FFFFLL,
    (int)"Cannot bind AnimationController to itself.",
    v5);
  return 2147549183LL;
}

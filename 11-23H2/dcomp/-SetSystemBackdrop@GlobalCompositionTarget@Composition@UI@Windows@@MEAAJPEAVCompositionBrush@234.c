/*
 * XREFs of ?SetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEAAJPEAVCompositionBrush@234@@Z @ 0x180158E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::GlobalCompositionTarget::SetSystemBackdrop(
        Windows::UI::Composition::GlobalCompositionTarget *this,
        struct Windows::UI::Composition::CompositionBrush *a2)
{
  Windows::UI::Composition::SpriteVisual **v2; // rcx
  const char *v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (Windows::UI::Composition::SpriteVisual **)*((_QWORD *)this + 26);
  if ( v2 )
    return Windows::UI::Composition::SystemBackdropHelper::SetSystemBackdrop(v2, a2);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x3C,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiontargetg.cpp",
    (const char *)0x8000FFFFLL,
    (int)"Cannot set a SystemBackdrop without first setting the Root!",
    v4);
  return 2147549183LL;
}

/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180015770
 * Callers:
 *     ?OnAnimatedPropertyChanged@InsetClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180015690 (-OnAnimatedPropertyChanged@InsetClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TY.c)
 *     ?OnAnimatedPropertyChanged@RectangleClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18017B630 (-OnAnimatedPropertyChanged@RectangleClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800155D0 (-OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EX.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::OnAnimatedPropertyChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        float *a7,
        __int16 a8)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = *(_QWORD *)(a1 + 160);
  if ( v9 && (_DWORD)a2 == *(_DWORD *)(v9 + 128) )
  {
    LOBYTE(v13) = a5;
    v10 = Windows::UI::Composition::ComponentTransform2D::OnAnimatedPropertyChanged(v9, a2, a3, a4, v13, a6, a7, a8);
    if ( v10 >= 0 )
      return 0LL;
    v12 = 134LL;
  }
  else
  {
    v10 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, a5, a6, a7, a8);
    if ( v10 >= 0 )
      return 0LL;
    v12 = 145LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}

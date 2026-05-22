/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionEllipseGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180177500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 *     ?OnAnimatedPropertyChanged@CompositionGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1801893C4 (-OnAnimatedPropertyChanged@CompositionGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXP.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEllipseGeometry::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int16 a8)
{
  unsigned int v8; // r13d
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD v15[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = a4;
  v15[1] = &Windows::UI::Composition::CompositionEllipseGeometry::k_rgAnimDef;
  v15[0] = 2LL;
  if ( Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(a1, a2, a3, a4, a5, a6, a7, a8, v15) )
    return 0LL;
  v12 = Windows::UI::Composition::CompositionGeometry::OnAnimatedPropertyChanged(a1, a2, a3, v8);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBB,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionellipsegeometry.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}

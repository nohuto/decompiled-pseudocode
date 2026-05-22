/*
 * XREFs of ?OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800155D0
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180015770 (-OnAnimatedPropertyChanged@CompositionClip@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESS.c)
 *     ?OnAnimatedPropertyChanged@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180159740 (-OnAnimatedPropertyChanged@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION.c)
 *     ?OnAnimatedPropertyChanged@CompositionGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180173E60 (-OnAnimatedPropertyChanged@CompositionGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITIO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform2D::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        float *a7,
        __int16 a8)
{
  float *v12; // rbx
  __int16 v13; // r15
  char v14; // r12
  char v15; // r13
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+38h] [rbp-50h]
  _QWORD v22[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  float v24; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 == 4 )
  {
    v12 = &v24;
    v24 = (float)(*a7 * 3.1415927) / 180.0;
  }
  else
  {
    v12 = a7;
  }
  v13 = a8;
  v14 = a6;
  v15 = a5;
  v22[1] = &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef;
  v22[0] = 7LL;
  if ( (unsigned __int8)Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(
                          a1,
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          (__int64)v12,
                          a8,
                          (__int64)v22) )
    return 0LL;
  LOWORD(v21) = v13;
  LOBYTE(v20) = v14;
  LOBYTE(v19) = v15;
  v17 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(a1, a2, a3, a4, v19, v20, v12, v21);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x141,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}

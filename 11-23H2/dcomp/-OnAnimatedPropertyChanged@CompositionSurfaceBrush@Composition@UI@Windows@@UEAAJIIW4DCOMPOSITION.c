/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180159740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800155D0 (-OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EX.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        float *a7,
        __int16 a8)
{
  unsigned int v9; // ebp
  __int64 v10; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-68h]
  _QWORD v17[2]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9 = a4;
  v10 = *(_QWORD *)(a1 + 288);
  if ( v10 && a2 == *(_DWORD *)(v10 + 128) )
  {
    LOBYTE(v16) = a5;
    v13 = Windows::UI::Composition::ComponentTransform2D::OnAnimatedPropertyChanged(v10, a2, a3, a4, v16, a6, a7, a8);
    if ( v13 < 0 )
    {
      v14 = 627LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  else
  {
    v17[1] = &Windows::UI::Composition::CompositionSurfaceBrush::k_rgAnimDef;
    v17[0] = 4LL;
    if ( !Windows::UI::Composition::ProxyObject::UpdateAnimatedProperty(a1, a2, a3, a4, a5, a6, (__int64)a7, a8, v17) )
    {
      v13 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
              a1,
              a2,
              a3,
              v9,
              a5,
              a6,
              (__int64)a7,
              a8);
      if ( v13 < 0 )
      {
        v14 = 646LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}

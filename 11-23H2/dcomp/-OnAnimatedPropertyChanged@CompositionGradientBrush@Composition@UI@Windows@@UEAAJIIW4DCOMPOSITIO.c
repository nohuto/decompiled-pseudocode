/*
 * XREFs of ?OnAnimatedPropertyChanged@CompositionGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180173E60
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180175C70 (-OnAnimatedPropertyChanged@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMP.c)
 *     ?OnAnimatedPropertyChanged@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180177180 (-OnAnimatedPropertyChanged@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x1800155D0 (-OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EX.c)
 *     ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18006DAE0 (-OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::OnAnimatedPropertyChanged(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        float *a7,
        __int16 a8)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = *(_QWORD *)(a1 + 232);
  if ( v9 && a2 == *(_DWORD *)(v9 + 128) )
  {
    LOBYTE(v13) = a5;
    v10 = Windows::UI::Composition::ComponentTransform2D::OnAnimatedPropertyChanged(v9, a2, a3, a4, v13, a6, a7, a8);
    if ( v10 < 0 )
    {
      v11 = 265LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else
  {
    v10 = Windows::UI::Composition::CompositionObject::OnAnimatedPropertyChanged(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            (__int64)a7,
            a8);
    if ( v10 < 0 )
    {
      v11 = 276LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}

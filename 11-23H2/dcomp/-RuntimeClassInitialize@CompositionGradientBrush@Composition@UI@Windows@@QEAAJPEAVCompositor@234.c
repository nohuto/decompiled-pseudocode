/*
 * XREFs of ?RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18005DF4C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionLinearGradientBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionLinearGradientBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005DE5C (--$MakeAndInitialize2@VCompositionLinearGradientBrush@Composition@UI@Windows@@V1234@PEAVComposit.c)
 *     ?RuntimeClassInitialize@CompositionRadialGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180175D60 (-RuntimeClassInitialize@CompositionRadialGradientBrush@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??$MakeAndInitialize2@VCompositionColorGradientStopCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionGradientBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStopCollection@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionGradientBrush@456@@Z @ 0x18005DFD0 (--$MakeAndInitialize2@VCompositionColorGradientStopCollection@Composition@UI@Windows@@V1234@AEAP.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionGradientBrush *this,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Compositor *v9; // [rsp+38h] [rbp+10h] BYREF
  Windows::UI::Composition::CompositionGradientBrush *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, a3, 0);
  if ( v5 < 0 )
  {
    v7 = 32LL;
  }
  else
  {
    v10 = this;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::CompositionGradientBrush *>(
           (char *)this + 224,
           &v9,
           &v10);
    if ( v5 >= 0 )
    {
      *((_QWORD *)this + 25) = *((_QWORD *)a2 + 57);
      result = 0LL;
      *((_DWORD *)this + 54) = 1;
      return result;
    }
    v7 = 37LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}

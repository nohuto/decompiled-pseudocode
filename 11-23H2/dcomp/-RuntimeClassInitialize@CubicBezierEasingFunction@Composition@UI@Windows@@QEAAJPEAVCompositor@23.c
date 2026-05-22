/*
 * XREFs of ?RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z @ 0x180079CE0
 * Callers:
 *     ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunction@234@PEAVCompositor@234@MMMM@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAM222@Z @ 0x180079440 (--$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@VCompositionEasingFunct.c)
 *     ??$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVCubicBezierEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x180079BC0 (--$MakeAndInitialize2@VCubicBezierEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CubicBezierEasingFunction::RuntimeClassInitialize(
        Windows::UI::Composition::CubicBezierEasingFunction *this,
        struct Windows::UI::Composition::Compositor *a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a3 < 0.0 || a3 > 1.0 || a5 < 0.0 || a5 > 1.0 )
  {
    v11 = 56LL;
    goto LABEL_12;
  }
  if ( !_finite(a4) || !_finite(a6) )
  {
    v11 = 62LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcubicbeziereasingfunction.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneasingfunction.cpp",
      (const char *)(unsigned int)v8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcubicbeziereasingfunction.cpp",
      (const char *)v9);
    return v9;
  }
  else
  {
    *((float *)this + 42) = a3;
    result = 0LL;
    *((float *)this + 43) = a4;
    *((float *)this + 44) = a5;
    *((float *)this + 45) = a6;
    *((_DWORD *)this + 36) = 1;
  }
  return result;
}

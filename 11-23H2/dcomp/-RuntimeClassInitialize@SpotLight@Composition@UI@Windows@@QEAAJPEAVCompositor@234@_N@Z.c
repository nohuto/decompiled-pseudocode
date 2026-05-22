/*
 * XREFs of ?RuntimeClassInitialize@SpotLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A4D8
 * Callers:
 *     ??$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpotLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18000AE80 (--$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@.c)
 *     ??$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVSpotLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091D6C (--$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x18008A580 (-RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SpotLight::RuntimeClassInitialize(
        Windows::UI::Composition::SpotLight *this,
        struct Windows::UI::Composition::Compositor *a2,
        bool a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionLight::RuntimeClassInitialize(this, a2, 0x29u, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspotlight.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *((_DWORD *)this + 79) = -1082130432;
    *((_DWORD *)this + 92) = 1065353216;
    *((_DWORD *)this + 85) = 1065353216;
    *((_DWORD *)this + 84) = 1065353216;
    *((_DWORD *)this + 83) = 1065353216;
    *((_DWORD *)this + 82) = 1065353216;
    *((_DWORD *)this + 89) = 1065353216;
    *((_DWORD *)this + 88) = 1065353216;
    *((_DWORD *)this + 87) = 1065353216;
    *((_DWORD *)this + 86) = 1065353216;
    *((_DWORD *)this + 90) = 1065353216;
    *((_DWORD *)this + 91) = 1065353216;
    result = 0LL;
    *((_DWORD *)this + 76) = 1120403456;
    *((_DWORD *)this + 80) = 1057360530;
    *((_DWORD *)this + 81) = 1070141403;
  }
  return result;
}

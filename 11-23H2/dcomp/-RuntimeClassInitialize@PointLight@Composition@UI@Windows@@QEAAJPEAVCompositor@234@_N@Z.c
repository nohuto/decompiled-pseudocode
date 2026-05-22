/*
 * XREFs of ?RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18017A2F0
 * Callers:
 *     ??$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVPointLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121190 (--$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2.c)
 *     ??$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVPointLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180121254 (--$MakeAndInitialize2@VPointLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x18008A580 (-RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::PointLight::RuntimeClassInitialize(
        Windows::UI::Composition::PointLight *this,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned __int8 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionLight::RuntimeClassInitialize(this, a2, 38, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_DWORD *)this + 76) = 1120403456;
    *((_DWORD *)this + 81) = 1065353216;
    *((_DWORD *)this + 80) = 1065353216;
    *((_DWORD *)this + 79) = 1065353216;
    *((_DWORD *)this + 78) = 1065353216;
    *((_DWORD *)this + 77) = 1065353216;
    *((_DWORD *)this + 88) = 1065353216;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointlight.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

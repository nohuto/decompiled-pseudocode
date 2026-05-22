/*
 * XREFs of ?RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x180091C34
 * Callers:
 *     ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091B2C (--$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@.c)
 *     ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180120D34 (--$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x18008A580 (-RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::DistantLight::RuntimeClassInitialize(
        Windows::UI::Composition::DistantLight *this,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned __int8 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionLight::RuntimeClassInitialize(this, a2, 34, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdistantlight.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *((_DWORD *)this + 74) = -1082130432;
    *((_DWORD *)this + 78) = 1065353216;
    *((_DWORD *)this + 77) = 1065353216;
    *((_DWORD *)this + 76) = 1065353216;
    *((_DWORD *)this + 75) = 1065353216;
    *((_DWORD *)this + 82) = 1065353216;
    return 0LL;
  }
}

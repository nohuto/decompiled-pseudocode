/*
 * XREFs of ?RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A47C
 * Callers:
 *     ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800163C0 (--$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 *     ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180092A7C (--$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x18008A580 (-RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AmbientLight::RuntimeClassInitialize(
        Windows::UI::Composition::AmbientLight *this,
        struct Windows::UI::Composition::Compositor *a2,
        bool a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionLight::RuntimeClassInitialize(this, a2, 0x20u, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtambientlight.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *((_DWORD *)this + 75) = 1065353216;
    *((_DWORD *)this + 74) = 1065353216;
    *((_DWORD *)this + 73) = 1065353216;
    *((_DWORD *)this + 72) = 1065353216;
    *((_DWORD *)this + 76) = 1065353216;
    return 0LL;
  }
}

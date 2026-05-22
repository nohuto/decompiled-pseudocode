/*
 * XREFs of ?RuntimeClassInitialize@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x180007348
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180006FBC (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompos.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x1801204E4 (--$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V12_ea_1801204E4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionProjectedShadowCaster *this,
        struct Windows::UI::Composition::Compositor *a2,
        bool a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 0x83u, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowcaster.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}

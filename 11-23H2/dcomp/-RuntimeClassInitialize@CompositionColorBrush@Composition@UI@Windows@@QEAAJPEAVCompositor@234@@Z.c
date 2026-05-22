/*
 * XREFs of ?RuntimeClassInitialize@CompositionColorBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180015F5C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015E88 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionColorBrush::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionColorBrush *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 0x16u, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncolorbrush.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

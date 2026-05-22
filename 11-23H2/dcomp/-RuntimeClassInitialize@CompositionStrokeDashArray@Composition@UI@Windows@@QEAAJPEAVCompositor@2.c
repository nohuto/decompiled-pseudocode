/*
 * XREFs of ?RuntimeClassInitialize@CompositionStrokeDashArray@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSpriteShape@234@@Z @ 0x1801A0100
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionStrokeDashArray@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionSpriteShape@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionStrokeDashArray@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionSpriteShape@456@@Z @ 0x18016FBC4 (--$MakeAndInitialize2@VCompositionStrokeDashArray@Composition@UI@Windows@@V1234@PEAVCompositor@2.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionStrokeDashArray::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionStrokeDashArray *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::CompositionSpriteShape *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)this + 23) = a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionstrokedasharray.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}

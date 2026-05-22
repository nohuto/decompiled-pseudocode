/*
 * XREFs of ?RuntimeClassInitialize@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@234@@Z @ 0x1801952DC
 * Callers:
 *     ??$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompositionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollection@Composition@UI@Windows@@$$QEAPEAVCompositionAnimation@456@@Z @ 0x18014DFC8 (--$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::RuntimeClassInitialize(
        Windows::UI::Composition::InitialValueExpressionCollection *this,
        struct Windows::UI::Composition::Compositor **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2[3]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)this + 21) = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioncollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

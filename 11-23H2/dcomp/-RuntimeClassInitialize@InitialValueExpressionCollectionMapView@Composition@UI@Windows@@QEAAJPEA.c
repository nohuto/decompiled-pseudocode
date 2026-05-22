/*
 * XREFs of ?RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@@Z @ 0x1801A260C
 * Callers:
 *     ??$MakeAndInitialize2@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@V1234@PEAVInitialValueExpressionCollection@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollectionMapView@Composition@UI@Windows@@$$QEAPEAVInitialValueExpressionCollection@456@@Z @ 0x1801944D4 (--$MakeAndInitialize2@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@V1234@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ??4?$RefPtr@VInitialValueExpressionCollection@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVInitialValueExpressionCollection@Composition@UI@Windows@@@Z @ 0x1801A23AC (--4-$RefPtr@VInitialValueExpressionCollection@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV0.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollectionMapView::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Microsoft::WRL2::ContextSession **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize((Microsoft::WRL2::ContextRuntimeClass *)this, a2[3]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::InitialValueExpressionCollection>::operator=(
      this + 8,
      (Microsoft::WRL2::NestableRuntimeClass *)a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioncollectionmapview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

/*
 * XREFs of ?RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801A2D5C
 * Callers:
 *     ??$MakeAndInitialize2@VInitialValueExpressionIterator@Composition@UI@Windows@@V1234@PEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionIterator@Composition@UI@Windows@@$$QEAPEAVInitialValueExpressionCollection@456@$$QEAPEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801945B4 (--$MakeAndInitialize2@VInitialValueExpressionIterator@Composition@UI@Windows@@V1234@PEAVInitialV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ??4?$RefPtr@VInitialValueExpressionCollection@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVInitialValueExpressionCollection@Composition@UI@Windows@@@Z @ 0x1801A23AC (--4-$RefPtr@VInitialValueExpressionCollection@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV0.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionIterator::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        _QWORD **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(
         (Microsoft::WRL2::ContextRuntimeClass *)a1,
         *(struct Microsoft::WRL2::ContextSession **)(a2 + 24));
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::InitialValueExpressionCollection>::operator=(
      (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 56),
      (Microsoft::WRL2::NestableRuntimeClass *)a2);
    *(_QWORD *)(a1 + 64) = a3;
    *(_QWORD *)(a1 + 72) = **a3;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 176);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioniterator.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}

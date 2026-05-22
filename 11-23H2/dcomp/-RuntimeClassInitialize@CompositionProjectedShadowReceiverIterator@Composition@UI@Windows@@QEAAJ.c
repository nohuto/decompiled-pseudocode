/*
 * XREFs of ?RuntimeClassInitialize@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadow@234@@Z @ 0x1801A3690
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@V1234@PEAVCompositionProjectedShadow@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@$$QEAPEAVCompositionProjectedShadow@456@@Z @ 0x1801A166C (--$MakeAndInitialize2@VCompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@V1234@.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionProjectedShadow@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionProjectedShadow@Composition@UI@Windows@@@Z @ 0x1800085AC (--4-$RefPtr@VCompositionProjectedShadow@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverIterator::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Microsoft::WRL2::ContextSession **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize((Microsoft::WRL2::ContextRuntimeClass *)this, a2[3]);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadow>::operator=(
      this + 8,
      (Microsoft::WRL2::NestableRuntimeClass *)a2);
    *((_DWORD *)this + 14) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowreceiveriterator.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}

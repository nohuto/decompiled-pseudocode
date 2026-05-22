/*
 * XREFs of ??4?$RefPtr@VCompositionProjectedShadow@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionProjectedShadow@Composition@UI@Windows@@@Z @ 0x1800085AC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowCasterCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionProjectedShadow@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCasterCollection@Composition@UI@Windows@@AEAPEAVCompositionProjectedShadow@456@@Z @ 0x180008334 (--$MakeAndInitialize2@VCompositionProjectedShadowCasterCollection@Composition@UI@Windows@@V1234@.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionProjectedShadow@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionProjectedShadow@456@@Z @ 0x1800084C4 (--$MakeAndInitialize2@VCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Wind.c)
 *     ?RuntimeClassInitialize@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadow@234@@Z @ 0x18018B460 (-RuntimeClassInitialize@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@QEAAJPE.c)
 *     ?RuntimeClassInitialize@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadow@234@@Z @ 0x1801A3690 (-RuntimeClassInitialize@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadow>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}

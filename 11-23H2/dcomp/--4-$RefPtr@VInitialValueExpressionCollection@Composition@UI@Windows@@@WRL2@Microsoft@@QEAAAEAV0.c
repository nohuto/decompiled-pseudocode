/*
 * XREFs of ??4?$RefPtr@VInitialValueExpressionCollection@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVInitialValueExpressionCollection@Composition@UI@Windows@@@Z @ 0x1801A23AC
 * Callers:
 *     ?RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@@Z @ 0x1801A260C (-RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEA.c)
 *     ?RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801A2D5C (-RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialV.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::InitialValueExpressionCollection>::operator=(
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

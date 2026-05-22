/*
 * XREFs of ?CollectionItemFromApi@CompositionShapeCollection@Composition@UI@Windows@@QEAA@PEAUICompositionShape@234@PEAJ@Z @ 0x1801A0AB8
 * Callers:
 *     ?IndexOf@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUICompositionShape@234@PEAIPEAE@Z @ 0x1801A1150 (-IndexOf@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Compos.c)
 *     ?InsertAt@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUICompositionShape@234@@Z @ 0x1801A12B0 (-InsertAt@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Compo.c)
 *     ?SetAt@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUICompositionShape@234@@Z @ 0x1801A1540 (-SetAt@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composit.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::CompositionShapeCollection::CollectionItemFromApi(
        struct Microsoft::WRL2::ContextSession **this,
        Microsoft::WRL2::NestableRuntimeClass **a2,
        struct IUnknown *a3,
        _DWORD *a4)
{
  int v8; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass **result; // rax
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(a2);
  v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         this[3],
         a3,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionShape::s_InterfaceType,
         &v11);
  v9 = v11;
  *a4 = v8;
  result = a2;
  *a2 = v9;
  return result;
}

/*
 * XREFs of ?CollectionItemFromApi@SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneComponent@2345@PEAJ@Z @ 0x180141F9C
 * Callers:
 *     ?Append@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUISceneComponent@Scenes@234@@Z @ 0x180141CB0 (-Append@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Co.c)
 *     ?IndexOf@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAUISceneComponent@Scenes@234@PEAIPEAE@Z @ 0x180143300 (-IndexOf@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@C.c)
 *     ?InsertAt@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneComponent@Scenes@234@@Z @ 0x1801435C0 (-InsertAt@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@.c)
 *     ?SetAt@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIPEAUISceneComponent@Scenes@234@@Z @ 0x1801442B0 (-SetAt@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Com.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::Scenes::SceneComponentCollection::CollectionItemFromApi(
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
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Scenes::SceneComponent::s_InterfaceType,
         &v11);
  v9 = v11;
  *a4 = v8;
  result = a2;
  *a2 = v9;
  return result;
}

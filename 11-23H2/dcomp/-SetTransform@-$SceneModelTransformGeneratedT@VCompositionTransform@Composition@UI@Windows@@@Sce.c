/*
 * XREFs of ?SetTransform@?$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVComponentTransform3D@345@@Z @ 0x180193048
 * Callers:
 *     ?Destroy@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x180192A90 (-Destroy@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180192C4C (-RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@3.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransformGeneratedT<Windows::UI::Composition::CompositionTransform>::SetTransform(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  int v4; // r9d
  __int64 v5; // rdx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
    v4 = *((_DWORD *)a2 + 32);
  else
    v4 = 0;
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    0,
    v4);
  if ( *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 152) != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v7 = *(volatile signed __int32 **)(a1 + 152);
    *(_QWORD *)(a1 + 152) = a2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(&v7, v5);
  }
  return 0LL;
}

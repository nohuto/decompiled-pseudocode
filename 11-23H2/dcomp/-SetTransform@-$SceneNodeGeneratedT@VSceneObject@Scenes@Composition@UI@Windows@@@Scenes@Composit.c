/*
 * XREFs of ?SetTransform@?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVSceneModelTransform@2345@@Z @ 0x180144574
 * Callers:
 *     ?Destroy@SceneNode@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801421B0 (-Destroy@SceneNode@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x180142254 (-EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::SetTransform(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  int v4; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx

  if ( a2 )
    v4 = *((_DWORD *)a2 + 32);
  else
    v4 = 0;
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    2,
    v4);
  if ( *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 152) != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v5 = *(Microsoft::WRL2::NestableRuntimeClass **)(a1 + 152);
    *(_QWORD *)(a1 + 152) = a2;
    if ( v5 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
  return 0LL;
}

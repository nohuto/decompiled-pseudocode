/*
 * XREFs of ?Destroy@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x180192A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetTransform@?$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVComponentTransform3D@345@@Z @ 0x180193048 (-SetTransform@-$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Sce.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::Destroy(
        Microsoft::WRL2::ContextRuntimeClass **this)
{
  Microsoft::WRL2::ContextRuntimeClass::Dispose(this[19]);
  Windows::UI::Composition::Scenes::SceneModelTransformGeneratedT<Windows::UI::Composition::CompositionTransform>::SetTransform(
    this,
    0LL);
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}

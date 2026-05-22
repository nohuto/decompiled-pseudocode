/*
 * XREFs of ??4?$RefPtr@VSharedSectionWrapper@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801321A8
 * Callers:
 *     ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@5@@Z @ 0x18013254C (-FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W.c)
 *     ?GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAPEAVCompositionStrokeDashArray@234@@Z @ 0x180170D88 (-GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAPEAVCompositionStroke.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::SharedSectionWrapper>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*a2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}

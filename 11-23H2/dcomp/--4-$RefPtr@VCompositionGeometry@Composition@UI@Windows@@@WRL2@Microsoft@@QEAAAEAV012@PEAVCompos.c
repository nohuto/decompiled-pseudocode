/*
 * XREFs of ??4?$RefPtr@VCompositionGeometry@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionGeometry@Composition@UI@Windows@@@Z @ 0x180087CCC
 * Callers:
 *     ?SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C14 (-SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@.c)
 *     ?SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C70 (-SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionGeometry>::operator=(
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

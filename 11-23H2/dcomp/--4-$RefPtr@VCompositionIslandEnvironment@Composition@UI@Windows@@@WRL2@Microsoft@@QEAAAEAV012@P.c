/*
 * XREFs of ??4?$RefPtr@VCompositionIslandEnvironment@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionIslandEnvironment@Composition@UI@Windows@@@Z @ 0x18006B490
 * Callers:
 *     ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z @ 0x18006B2D0 (-SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionIslandEnvironment>::operator=(
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

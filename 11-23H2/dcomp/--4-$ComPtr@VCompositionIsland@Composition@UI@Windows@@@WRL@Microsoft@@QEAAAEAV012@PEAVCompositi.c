/*
 * XREFs of ??4?$ComPtr@VCompositionIsland@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionIsland@Composition@UI@Windows@@@Z @ 0x18006AD28
 * Callers:
 *     ?AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x18006AB7C (-AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU-$ITyp.c)
 *     ?OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@PEBG@Z @ 0x180160320 (-OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@P.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionIsland>::operator=(
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

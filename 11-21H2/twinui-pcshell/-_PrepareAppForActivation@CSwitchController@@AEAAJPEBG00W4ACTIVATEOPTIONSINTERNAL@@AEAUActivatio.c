/*
 * XREFs of ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1804E5994
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1804E4E40 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1804E4FF4 (-_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@.c)
 *     ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x1804E5784 (-_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 */

__int64 __fastcall CSwitchController::_PrepareAppForActivation(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        const WCHAR *a4,
        int a5,
        __int64 *a6)
{
  __int64 v10; // rbx
  __int64 *AddressOf; // rax
  __int64 v12; // rbx

  v10 = a6[4];
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(a6 + 3);
  CSwitchController::_GetAppForSwitch(a1, (__int64)a2, v10 != 0, a6[2], AddressOf);
  v12 = a6[3];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a6 + 4);
  return CSwitchController::_PackageActivationArguments(a6[7], a2, a3, a4, a6[7], a5, v12 == 0, a6 + 4);
}

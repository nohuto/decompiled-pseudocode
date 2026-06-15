/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationSpecificEndpointInfo@@@WRL@Microsoft@@UEAA@XZ @ 0x18001BEC8
 * Callers:
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$0 @ 0x18004A412 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$0.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$0 @ 0x18004A4B1 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}

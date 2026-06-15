/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@UEAA@XZ @ 0x1800E9DCC
 * Callers:
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$0 @ 0x18007AD42 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$0 @ 0x18007DC7F (_CEndpointCharacteristicsCache--CEndpointCharacteristicsCache_--_1_--dtor$0.c)
 *     _ResourceGroupInstance::ResourceGroupInstance_::_1_::dtor$0 @ 0x1800FE743 (_ResourceGroupInstance--ResourceGroupInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectsStore>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectsStore>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}

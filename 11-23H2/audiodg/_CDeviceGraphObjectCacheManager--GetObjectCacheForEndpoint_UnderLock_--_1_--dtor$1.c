/*
 * XREFs of _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$1 @ 0x140035DB6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((void *)(a2 + 96));
}

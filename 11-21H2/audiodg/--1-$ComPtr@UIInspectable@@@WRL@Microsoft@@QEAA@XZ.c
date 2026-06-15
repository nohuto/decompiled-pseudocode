/*
 * XREFs of ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x1400688F4
 * Callers:
 *     _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$1 @ 0x140036951 (_CDeviceGraphObjectCacheManager--GetObjectCacheForEndpoint_UnderLock_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(a1);
}

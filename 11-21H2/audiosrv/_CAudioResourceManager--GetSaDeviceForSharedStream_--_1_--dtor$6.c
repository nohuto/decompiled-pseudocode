/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$6 @ 0x18006C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(a2 + 112);
}

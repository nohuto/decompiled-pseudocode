/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x180102078
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(a2 + 80));
}

/*
 * XREFs of _CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x180114DF1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}

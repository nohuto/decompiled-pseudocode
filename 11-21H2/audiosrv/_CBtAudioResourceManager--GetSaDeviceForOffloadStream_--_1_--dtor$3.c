/*
 * XREFs of _CBtAudioResourceManager::GetSaDeviceForOffloadStream_::_1_::dtor$3 @ 0x18011672F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManager::GetSaDeviceForOffloadStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)(a2 + 152));
}

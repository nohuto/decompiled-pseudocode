/*
 * XREFs of _CBtAudioResourceManager::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x18011407A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManager::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}

/*
 * XREFs of _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$2 @ 0x14006115C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}

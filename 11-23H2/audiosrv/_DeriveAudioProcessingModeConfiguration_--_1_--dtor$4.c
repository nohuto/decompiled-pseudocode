/*
 * XREFs of _DeriveAudioProcessingModeConfiguration_::_1_::dtor$4 @ 0x18007C41C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeriveAudioProcessingModeConfiguration_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 80));
}

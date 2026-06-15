/*
 * XREFs of _GetPacketSizeConstraints_::_1_::dtor$3 @ 0x180078120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPacketSizeConstraints_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}

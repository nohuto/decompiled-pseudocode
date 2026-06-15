/*
 * XREFs of _ConnectorSupportsFormat_::_1_::dtor$9 @ 0x1801147F9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ConnectorSupportsFormat_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}

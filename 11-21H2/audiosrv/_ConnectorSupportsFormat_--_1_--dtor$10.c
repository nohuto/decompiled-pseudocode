/*
 * XREFs of _ConnectorSupportsFormat_::_1_::dtor$10 @ 0x1800E880A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ConnectorSupportsFormat_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>((__int64 **)(a2 + 224));
}

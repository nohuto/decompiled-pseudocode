/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$6 @ 0x18007C36E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(a2 + 128);
}

/*
 * XREFs of _DeviceInputHost::DeviceInputHost_::_1_::dtor$14 @ 0x1800A9713
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceInputHost::DeviceInputHost_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(a2 + 96);
}

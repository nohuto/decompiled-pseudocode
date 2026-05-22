/*
 * XREFs of _DeviceInputHost::DeviceInputHost_::_1_::dtor$13 @ 0x18008010F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceInputHost::DeviceInputHost_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(a2 + 96);
}

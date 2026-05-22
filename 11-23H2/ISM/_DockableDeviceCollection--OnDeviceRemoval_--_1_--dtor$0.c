/*
 * XREFs of _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800E3A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 136));
}

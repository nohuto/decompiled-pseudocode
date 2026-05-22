/*
 * XREFs of _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800E4D98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDeviceCollection::OnInputReport_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 56));
}

/*
 * XREFs of _VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor$1 @ 0x1801C9C6A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 64));
}

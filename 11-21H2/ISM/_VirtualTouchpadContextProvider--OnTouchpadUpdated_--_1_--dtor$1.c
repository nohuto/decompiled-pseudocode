/*
 * XREFs of _VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor$1 @ 0x18019E2B5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 48));
}

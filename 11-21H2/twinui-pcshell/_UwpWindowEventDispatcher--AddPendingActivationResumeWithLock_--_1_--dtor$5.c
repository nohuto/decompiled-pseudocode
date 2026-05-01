/*
 * XREFs of _UwpWindowEventDispatcher::AddPendingActivationResumeWithLock_::_1_::dtor$5 @ 0x1803EB6A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::AddPendingActivationResumeWithLock_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::~com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>((__int64 *)(a2 + 200));
}

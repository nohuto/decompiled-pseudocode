/*
 * XREFs of _UwpWindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$11 @ 0x1804D2CFD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)(a2 + 136));
}

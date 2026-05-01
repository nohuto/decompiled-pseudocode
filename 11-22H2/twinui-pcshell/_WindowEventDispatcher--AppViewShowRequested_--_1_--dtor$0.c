/*
 * XREFs of _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$0 @ 0x1804C0A5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::AppViewShowRequested_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 88));
}

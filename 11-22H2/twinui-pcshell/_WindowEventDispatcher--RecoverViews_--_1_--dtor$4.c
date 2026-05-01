/*
 * XREFs of _WindowEventDispatcher::RecoverViews_::_1_::dtor$4 @ 0x1804C8509
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::RecoverViews_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}

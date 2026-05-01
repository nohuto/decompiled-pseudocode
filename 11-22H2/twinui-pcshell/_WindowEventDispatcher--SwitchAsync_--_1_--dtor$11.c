/*
 * XREFs of _WindowEventDispatcher::SwitchAsync_::_1_::dtor$11 @ 0x1804CAE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::SwitchAsync_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}

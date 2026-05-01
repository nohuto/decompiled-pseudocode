/*
 * XREFs of _Win32AppStateManager::UpdateAppView_::_1_::dtor$0 @ 0x180626B87
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::UpdateAppView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}

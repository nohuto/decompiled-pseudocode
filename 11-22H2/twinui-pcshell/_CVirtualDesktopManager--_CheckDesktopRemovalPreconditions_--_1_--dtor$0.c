/*
 * XREFs of _CVirtualDesktopManager::_CheckDesktopRemovalPreconditions_::_1_::dtor$0 @ 0x180607729
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::_CheckDesktopRemovalPreconditions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}

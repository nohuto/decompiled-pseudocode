/*
 * XREFs of ?SetRemoteSessionWindowManager@CVirtualDesktopManager@@UEAAXAEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180139B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::SetRemoteSessionWindowManager(__int64 a1, _QWORD *a2)
{
  return wil::com_ptr_t<Windows::Internal::Shell::IRemoteSessionWindowManager,wil::err_exception_policy>::operator=(
           a1 + 216,
           *a2);
}

/*
 * XREFs of ??I?$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@XZ @ 0x1802613E0
 * Callers:
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FDE10 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802758A0 (-reset@-$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration,wil::err_exception_policy>::operator&(
        __int64 a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration,wil::err_exception_policy>::reset();
  return a1;
}

/*
 * XREFs of ??$CoCreateInstance@VApplicationActivationManager@@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@0@K@Z @ 0x18062D8D0
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180271830 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     ??$CoCreateInstance@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x18062D7A0 (--$CoCreateInstance@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_.c)
 */

LPVOID *__fastcall wil::CoCreateInstance<ApplicationActivationManager,IApplicationActivationManager,wil::err_exception_policy>(
        LPVOID *a1)
{
  wil::CoCreateInstance<IApplicationActivationManager,wil::err_exception_policy>(a1);
  return a1;
}

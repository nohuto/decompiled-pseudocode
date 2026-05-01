/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6642fb088f192eae1a0f474d97eaf06a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180184210
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x180184238 (--$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationF.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_6642fb088f192eae1a0f474d97eaf06a_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>(
    a2,
    a1);
  return a1;
}

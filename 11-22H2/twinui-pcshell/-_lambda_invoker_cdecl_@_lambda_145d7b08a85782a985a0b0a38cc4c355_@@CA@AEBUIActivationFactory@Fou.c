/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_145d7b08a85782a985a0b0a38cc4c355_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1806935C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@23@XZ @ 0x180693760 (--$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_145d7b08a85782a985a0b0a38cc4c355_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
    a2,
    a1);
  return a1;
}

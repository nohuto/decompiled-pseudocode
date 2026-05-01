/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_145d7b08a85782a985a0b0a38cc4c355_@@CA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIActivationFactory@Foundation@78@@Z @ 0x1801C11A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@23@XZ @ 0x1801C1A34 (--$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

__int64 __fastcall _lambda_145d7b08a85782a985a0b0a38cc4c355_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
    a2,
    a1);
  return a1;
}

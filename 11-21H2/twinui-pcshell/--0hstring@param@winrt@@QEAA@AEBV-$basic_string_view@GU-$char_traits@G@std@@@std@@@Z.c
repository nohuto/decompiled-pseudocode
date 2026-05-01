/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800FC56C
 * Callers:
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?AUJsonValue@Json@Data@Windows@2@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1801C252C (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ??$call@P6A?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIActivationFactory@Foundation@67@@Z@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@$$QEAP6A?AU3456782@AEBUIActivationFactory@Foundation@82@@Z@Z @ 0x1801C2654 (--$call@P6A-AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEB.c)
 *     ??$call@P6A?AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUJsonObject@Json@Data@Windows@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1801C277C (--$call@P6A-AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-$fact.c)
 *     ??$call@P6A?AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUPackageManager@Deployment@Management@Windows@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1801C28A4 (--$call@P6A-AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundat.c)
 *     ??$call@P6A?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801D03EC (--$call@P6A-AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivation.c)
 *     ??$call@P6A?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1801D0514 (--$call@P6A-AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFacto.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(winrt::param::hstring *a1, __int64 a2)
{
  winrt::param::hstring::create_string_reference(a1, *(const unsigned __int16 **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}

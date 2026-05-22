/*
 * XREFs of WINRT_IMPL_InterlockedPushEntrySList @ 0x18004C289
 * Callers:
 *     ??$call@P6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppViewStatics@23456@@Z@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIAppViewStatics@45672@@Z@Z @ 0x18003F2D4 (--$call@P6A-AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppV.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIWindowStatics@45672@@Z@Z @ 0x18003F434 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x180084310 (--$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ??$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@Z @ 0x180084488 (--$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?AUIAsyncAction@Foundation@Windows@2@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800C93C0 (--$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@-$factory_cache_entry@UThreadPool@Thread.c)
 *     ??$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@2@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@Z @ 0x1800EEFF8 (--$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@-$factory_cache_entry@UWindowManagementP.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall WINRT_IMPL_InterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  return InterlockedPushEntrySList(ListHead, ListEntry);
}

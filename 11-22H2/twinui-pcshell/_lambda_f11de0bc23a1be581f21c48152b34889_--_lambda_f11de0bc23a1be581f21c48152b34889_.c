/*
 * XREFs of _lambda_f11de0bc23a1be581f21c48152b34889_::_lambda_f11de0bc23a1be581f21c48152b34889_ @ 0x18028CFE8
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1800795A8 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x1801B9F9C (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     ??0?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicationViewCollection@@@Z @ 0x1801BCD60 (--0-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicati.c)
 */

_QWORD *__fastcall lambda_f11de0bc23a1be581f21c48152b34889_::_lambda_f11de0bc23a1be581f21c48152b34889_(
        _QWORD *a1,
        __int64 *a2)
{
  wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
    a1,
    *a2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 1),
    a2 + 1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 2),
    a2 + 2);
  wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>(
    a1 + 3,
    a2[3]);
  return a1;
}

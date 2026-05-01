/*
 * XREFs of ??0?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicationViewCollection@@@Z @ 0x1801BCD60
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1800795A8 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::_lambda_f11de0bc23a1be581f21c48152b34889_ @ 0x18028CFE8 (_lambda_f11de0bc23a1be581f21c48152b34889_--_lambda_f11de0bc23a1be581f21c48152b34889_.c)
 *     ??0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054BE70 (--0CAppThumbnailWindow@@IEAA@AEBUCRect@Geometry@@PEAUIApplicationViewCollection@@AEBQEAUHMONITOR.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x18054C338 (_anonymous_namespace_--ProcessInputLambdaArgs--ProcessInputLambdaArgs.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18066E048 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x1806878B4 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--CMultitaskingViewTask.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806883CC (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}

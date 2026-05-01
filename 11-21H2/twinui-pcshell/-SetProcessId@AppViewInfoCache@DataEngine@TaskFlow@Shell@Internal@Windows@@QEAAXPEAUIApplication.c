/*
 * XREFs of ?SetProcessId@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@I@Z @ 0x180106D78
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008BA90 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180106DE4 (--$_Try_emplace@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$_ea_180106DE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::SetProcessId(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *this,
        struct IApplicationView *a2,
        int a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IApplicationView *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
    this,
    v5,
    &v6);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v6);
  *(_DWORD *)(v5[0] + 80LL) = a3;
}

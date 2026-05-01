/*
 * XREFs of ?IsWinRTApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804A3EC8
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::IsWinRTApplicationView(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener **))
{
  int (__fastcall **v2)(struct IApplicationView *, GUID *, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener **); // rax
  bool v3; // bl
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v2 = *a2;
  v5 = 0LL;
  v3 = (*v2)((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v5) >= 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v5);
  return v3;
}

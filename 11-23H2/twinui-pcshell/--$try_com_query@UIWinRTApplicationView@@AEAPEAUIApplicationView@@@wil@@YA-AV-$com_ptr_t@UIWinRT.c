/*
 * XREFs of ??$try_com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180036928
 * Callers:
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800364FC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18003CE4C (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B0808 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsSameAppId@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1805A8CB0 (-IsSameAppId@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z.c)
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180621BD8 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::try_com_query<IWinRTApplicationView,IApplicationView * &>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, a1);
  return a1;
}

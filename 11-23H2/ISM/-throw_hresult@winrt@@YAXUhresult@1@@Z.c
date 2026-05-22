/*
 * XREFs of ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A78C
 * Callers:
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800025FC (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x180002B4C (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002CC0 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002D04 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x18001B2A0 (-OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@Applicatio.c)
 *     ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x18001B3A0 (-OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationM.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180048948 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180048994 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180048C18 (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180048C64 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ?Stopped@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z @ 0x180048CB0 (-Stopped@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180048CFC (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180048E64 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052938 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAp.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800529B8 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ?AppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs@UIAppViewChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180098E24 (-AppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs@U.c)
 *     ?Status@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180099770 (-Status@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatc.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs@UIWindowChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800997FC (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs@UIW.c)
 *     ??$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18009B398 (--$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009BD18 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?GetFromId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x18009BED0 (-GetFromId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowS.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009BFA4 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009C058 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventA.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009C310 (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 *     ?Stop@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009D82C (-Stop@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatche.c)
 *     ?UniversalPropertyChanged@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18009D90C (-UniversalPropertyChanged@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversa.c)
 *     ?WindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppModelEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009DBA8 (-WindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppM.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A1428 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A1D54 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?ThreadId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A360C (-ThreadId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ??$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800E2E8C (--$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA-AUIThre.c)
 *     ?RunAsync@?$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUWorkItemHandler@Threading@System@Windows@3@@Z @ 0x1800E46D8 (-RunAsync@-$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@Sy.c)
 *     ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18010872C (--$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@.c)
 *     ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_K@Z @ 0x180108EEC (-GetForContainerIdAndHwnd@-$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801091EC (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?PresentationMode@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010AE84 (-PresentationMode@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppMode.c)
 *     ??$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@56@AEBUnullopt_t@8@@impl@winrt@@YA?AV?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@Windows@1@AEBUnullopt_t@3@@Z @ 0x18010CA30 (--$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010DDC0 (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
 *     ?IsForeground@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18017412C (-IsForeground@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800988C0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_hresult(unsigned int a1)
{
  _QWORD pExceptionObject[4]; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( winrt_throw_hresult_handler )
    winrt_throw_hresult_handler(0LL, 0LL, 0LL, retaddr, a1);
  switch ( a1 )
  {
    case 0x8007000E:
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    case 0x80070005:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_access_denied);
      throw (winrt::hresult_access_denied *)pExceptionObject;
    case 0x8001010E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_wrong_thread);
      throw (winrt::hresult_wrong_thread *)pExceptionObject;
    case 0x80004001:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_not_implemented);
      throw (winrt::hresult_not_implemented *)pExceptionObject;
    case 0x80070057:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_invalid_argument);
      throw (winrt::hresult_invalid_argument *)pExceptionObject;
    case 0x8000000B:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    case 0x80004002:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_no_interface);
      throw (winrt::hresult_no_interface *)pExceptionObject;
    case 0x80040111:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_class_not_available);
      throw (winrt::hresult_class_not_available *)pExceptionObject;
    case 0x80040154:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_class_not_registered);
      throw (winrt::hresult_class_not_registered *)pExceptionObject;
    case 0x8000000C:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_changed_state);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    case 0x8000000E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_method_call);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    case 0x8000000D:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_state_change);
      throw (winrt::hresult_illegal_state_change *)pExceptionObject;
    case 0x80000018:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_delegate_assignment);
      throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
    case 0x800704C7:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_canceled);
      throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::hresult_error::hresult_error((__int64)pExceptionObject, a1);
  throw (winrt::hresult_error *)pExceptionObject;
}

/*
 * XREFs of ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4
 * Callers:
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180001E88 (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x1800023AC (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x180006F80 (-OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@Applicatio.c)
 *     ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800071F0 (-OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationM.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001A1A0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??$call@P6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppViewStatics@23456@@Z@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIAppViewStatics@45672@@Z@Z @ 0x18003F2D4 (--$call@P6A-AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppV.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@$$QEAP6A?AU345672@AEBUIWindowStatics@45672@@Z@Z @ 0x18003F434 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x18003F7E0 (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x18003F948 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180048108 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180048188 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAp.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180081334 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180081378 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180081B84 (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?AppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs@UIAppViewChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081BD0 (-AppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs@U.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E50 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E94 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800825D0 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18008261C (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Status@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AW4WindowWatcherStatus@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180082658 (-Status@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatc.c)
 *     ?Stopped@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z @ 0x1800826A0 (-Stopped@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs@UIWindowChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18008272C (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowChangedEventArgs@UIW.c)
 *     ??$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800842A8 (--$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180084CB8 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?GetFromId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x180084E58 (-GetFromId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowS.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180084F2C (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180085240 (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180085710 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800865A0 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 *     ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x18008678C (-StopWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18008A328 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008AC3C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?ThreadId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x18008C55C (-ThreadId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ??$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA?AUIThreadPoolStatics@Threading@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C9538 (--$get_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@winrt@@YA-AUIThre.c)
 *     ?RunAsync@?$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@AEBUWorkItemHandler@Threading@System@63@@Z @ 0x1800CB048 (-RunAsync@-$consume_Windows_System_Threading_IThreadPoolStatics@UIThreadPoolStatics@Threading@Sy.c)
 *     ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800EF2EC (--$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@.c)
 *     ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@UI@Windows@3@AEBUguid@3@_K@Z @ 0x1800EFD38 (-GetForContainerIdAndHwnd@-$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800EFFDC (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?PresentationMode@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800F1A2C (-PresentationMode@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppMode.c)
 *     ?IsForeground@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180154CBC (-IsForeground@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x180081648 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_hresult(unsigned int a1)
{
  _QWORD pExceptionObject[4]; // [rsp+20h] [rbp-20h] BYREF

  switch ( a1 )
  {
    case 0x8007000E:
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    case 0x80070005:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80070005);
      throw (winrt::hresult_access_denied *)pExceptionObject;
    case 0x8001010E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8001010E);
      throw (winrt::hresult_wrong_thread *)pExceptionObject;
    case 0x80004001:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80004001);
      throw (winrt::hresult_not_implemented *)pExceptionObject;
    case 0x80070057:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80070057);
      throw (winrt::hresult_invalid_argument *)pExceptionObject;
    case 0x8000000B:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000B);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    case 0x80004002:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80004002);
      throw (winrt::hresult_no_interface *)pExceptionObject;
    case 0x80040111:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80040111);
      throw (winrt::hresult_class_not_available *)pExceptionObject;
    case 0x80040154:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80040154);
      throw (winrt::hresult_class_not_registered *)pExceptionObject;
    case 0x8000000C:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000C);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    case 0x8000000E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000E);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    case 0x8000000D:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x8000000D);
      throw (winrt::hresult_illegal_state_change *)pExceptionObject;
    case 0x80000018:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x80000018);
      throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
    case 0x800704C7:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, 0x800704C7);
      throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::hresult_error::hresult_error((__int64)pExceptionObject, a1);
  throw (winrt::hresult_error *)pExceptionObject;
}

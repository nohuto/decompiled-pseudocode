/*
 * XREFs of ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002B508 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180038E08 (-RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180060644 (-RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B3444 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x1800EAA48 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18012837C (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _lambda_36656ddb8fa4912729a8d7a5a6d2a129_::_lambda_36656ddb8fa4912729a8d7a5a6d2a129_ @ 0x1801DDB28 (_lambda_36656ddb8fa4912729a8d7a5a6d2a129_--_lambda_36656ddb8fa4912729a8d7a5a6d2a129_.c)
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_::__clone @ 0x1801E0460 (wistd--__function--__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_--__clone.c)
 *     _lambda_01b8ae2d9cbe4889d05ea36904e58758_::_lambda_01b8ae2d9cbe4889d05ea36904e58758_ @ 0x1801E111C (_lambda_01b8ae2d9cbe4889d05ea36904e58758_--_lambda_01b8ae2d9cbe4889d05ea36904e58758_.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801E15D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801E2FF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 *     _lambda_d6e2fcc688aea94bd4668f4735409710_::_lambda_d6e2fcc688aea94bd4668f4735409710_ @ 0x1801E7F44 (_lambda_d6e2fcc688aea94bd4668f4735409710_--_lambda_d6e2fcc688aea94bd4668f4735409710_.c)
 *     _lambda_cdce16f825702c0a1c57b181431f22d2_::_lambda_cdce16f825702c0a1c57b181431f22d2__0 @ 0x1801E8020 (_lambda_cdce16f825702c0a1c57b181431f22d2_--_lambda_cdce16f825702c0a1c57b181431f22d2__0.c)
 *     std::_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x1801F3EE0 (std--_Func_impl_no_alloc__lambda_7161037552807ecb21c9cc43a3bfdd2b__wil--com_ptr_t_W_ea_1801F3EE0.c)
 *     std::_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Copy @ 0x1801F5100 (std--_Func_impl_no_alloc__lambda_386f393653fa3b324229df568a487d77__wil--com_ptr_t_W_ea_1801F5100.c)
 *     wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_::__clone @ 0x180201530 (wistd--__function--__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_--__clone.c)
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::_lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x1802062D8 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--_lambda_0cfa17de80a192d7104afc8a843b7ae2_.c)
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_ @ 0x180206364 (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_.c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::_lambda_259a1410ba958232e2f70f54c5d031d1_ @ 0x1802063D0 (_lambda_259a1410ba958232e2f70f54c5d031d1_--_lambda_259a1410ba958232e2f70f54c5d031d1_.c)
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::_lambda_de295fbb3a8b8f22692faabe0885dace_ @ 0x180206448 (_lambda_de295fbb3a8b8f22692faabe0885dace_--_lambda_de295fbb3a8b8f22692faabe0885dace_.c)
 *     _lambda_58f4954a35e6992b2fe1d34b610efbe6_::_lambda_58f4954a35e6992b2fe1d34b610efbe6_ @ 0x180206474 (_lambda_58f4954a35e6992b2fe1d34b610efbe6_--_lambda_58f4954a35e6992b2fe1d34b610efbe6_.c)
 *     _lambda_825306615c33696f43f5a813d6c29089_::_lambda_825306615c33696f43f5a813d6c29089_ @ 0x1802064E0 (_lambda_825306615c33696f43f5a813d6c29089_--_lambda_825306615c33696f43f5a813d6c29089_.c)
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::_lambda_a09f288fb701b6a3bb133eb64dd6b836_ @ 0x180206538 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--_lambda_a09f288fb701b6a3bb133eb64dd6b836_.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x18020AC0C (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18020AD94 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x18020AF08 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     ?UpdateConnectedStandbyState@TouchKeyboardExperienceManager@@AEAAX_N@Z @ 0x18020BEC0 (-UpdateConnectedStandbyState@TouchKeyboardExperienceManager@@AEAAX_N@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x1802185E0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802185E0.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18021C660 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D770 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x180285848 (_lambda_b77313e954014d84b78f3886c1783ac6_--_lambda_b77313e954014d84b78f3886c1783ac6_.c)
 *     _lambda_acbcada56500a27ebda644c8cbf644cb_::operator() @ 0x180285DC0 (_lambda_acbcada56500a27ebda644c8cbf644cb_--operator().c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041F6D8 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BF900 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0550 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0B00 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C1A70 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804CFCC0 (-ApplyWindowingEnvironmentSettingsRequested@UwpWindowEventDispatcher@@UEAAJPEAUIApplyWindowingEn.c)
 *     ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1804D1800 (-OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInter.c)
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D30A0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D3960 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806883CC (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}

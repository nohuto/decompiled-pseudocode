/*
 * XREFs of ??1?$test_watcher@U_tip_StartMenuInvokeTest@@@tip@@QEAA@XZ @ 0x18017DCCC
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800257B0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180044D40 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$0 @ 0x18021510E (_XamlLauncherState--OnStartShown_--_1_--dtor$0.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$9 @ 0x18021790F (_XamlLauncherState--ShowStartView_--_1_--dtor$9.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated_::_1_::dtor$0 @ 0x18021FF79 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--EnsureDashboard_ea_18021FF79.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180451070 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$2 @ 0x1804513E4 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$2.c)
 *     _XamlLauncherState::TryToCompleteStartShowWithoutCortana_::_1_::dtor$1 @ 0x180452687 (_XamlLauncherState--TryToCompleteStartShowWithoutCortana_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall tip::test_watcher<_tip_StartMenuInvokeTest>::~test_watcher<_tip_StartMenuInvokeTest>(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 56);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

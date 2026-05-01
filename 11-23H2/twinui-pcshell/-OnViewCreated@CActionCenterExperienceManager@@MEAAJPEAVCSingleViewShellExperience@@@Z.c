/*
 * XREFs of ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007FC60
 * Callers:
 *     <none>
 * Callees:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800166B0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800808D4 (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800B1504 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180173B48 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180173D4C (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 *     ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x18018D758 (--$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@-$factory_cache_entry@UInputGestureManag.c)
 *     ?GetForInputSite@?$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x18018D8B0 (-GetForInputSite@-$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureM.c)
 *     ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x1801B7940 (-ApproveProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CActionCenterExperienceManager::OnViewCreated(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rax
  HWND v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 *v15; // [rsp+20h] [rbp-28h]
  __int64 *v16; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 v19; // [rsp+70h] [rbp+28h] BYREF
  __int64 v20; // [rsp+78h] [rbp+30h] BYREF
  __int64 (__fastcall *v21)(const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *); // [rsp+80h] [rbp+38h] BYREF
  __int64 *v22; // [rsp+88h] [rbp+40h] BYREF

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 16, 1LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x53C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      (int)v15);
  v6 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  v7 = v6;
  if ( v6 )
  {
    if ( !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x548,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)0x80004005LL,
        (int)v15);
      return 2147500037LL;
    }
    GetWindowThreadProcessId(v7, (LPDWORD)this + 182);
    if ( *((_DWORD *)this + 182) )
    {
      v15 = &qword_18098E108;
      _InterlockedIncrement64(&qword_18098E108);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
      {
        winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
          &v20);
        _InterlockedDecrement64(&qword_18098E108);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E108);
        v21 = _lambda_a5e19194432ba5e1a4e075778a86de15_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
          v8,
          &v20,
          &v21);
      }
      v22 = &v20;
      _InterlockedIncrement64(&qword_18098E128);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics> )
      {
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManagerStatics<winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::GetForInputSite(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>,
          &v19,
          &v20);
        _InterlockedDecrement64(&qword_18098E128);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E128);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
          v9,
          &v19,
          &v22);
      }
      winrt::Windows::Foundation::IUnknown::operator=((char *)this + 736, &v19);
      if ( v19 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
      LODWORD(v19) = *((_DWORD *)this + 182);
      v16 = &v19;
      v17 = 1;
      winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        (char *)this + 736,
        &v16);
      if ( v20 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    }
  }
  v10 = CActionCenterExperienceManager::SetZBand((CActionCenterExperienceManager *)((char *)this - 112));
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x553,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      (int)v15);
  LOBYTE(v12) = 3;
  LOBYTE(v11) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    v11,
    v12);
  v13 = CActionCenterExperienceManager::RaisePropertyChangedEvent(
          (CActionCenterExperienceManager *)((char *)this - 112),
          L"SuppressAnimations",
          *((_BYTE *)this + 320));
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x557,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v13,
      (int)v15);
  return 0LL;
}

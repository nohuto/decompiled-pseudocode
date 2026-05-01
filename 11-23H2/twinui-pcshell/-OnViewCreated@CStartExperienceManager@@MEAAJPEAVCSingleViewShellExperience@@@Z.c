/*
 * XREFs of ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800E4020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800B1504 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x18016575C (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180173D4C (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180189C7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18018B960 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x18018D758 (--$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@-$factory_cache_entry@UInputGestureManag.c)
 *     ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x1801B7940 (-ApproveProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAA_NXZ @ 0x1801E3310 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ @ 0x1801E334C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??R_lambda_967ba6ffebbbee34df142266fb8e05a9_@@QEBA@AEBUIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x180417688 (--R_lambda_967ba6ffebbbee34df142266fb8e05a9_@@QEBA@AEBUIInputGestureManagerStatics@Input@Interna.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::OnViewCreated(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CSingleViewShellExperience *v3; // rbx
  int v4; // eax
  int v5; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  HWND v7; // rax
  HWND v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v3 = (CStartExperienceManager *)((char *)this + 224);
  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)this + 224, 3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      (int)v14);
  v5 = PriorityBoostHelper::OnViewCreated(*((PriorityBoostHelper **)this + 27));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      (int)v14);
  if ( *((_QWORD *)this + 31) )
    CSingleViewShellExperience::KeepAlive(v3);
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 31), v6);
  v8 = v7;
  if ( v7 )
  {
    if ( !SetPropW(v7, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v9 = 607LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x80004005LL,
        (int)v14);
      return 2147500037LL;
    }
    if ( ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SSFJVTest>::GetImpl'::`2'::impl)
       || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LFSFSRTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LFSFSRTest>::GetImpl'::`2'::impl))
      && !SetPropW(v8, L"AttachToDesktop", HANDLE_FLAG_INHERIT) )
    {
      v9 = 613LL;
      goto LABEL_10;
    }
    if ( !SetPropW(v8, L"WindowShouldReportLayoutCompletedTelemetryProp", HANDLE_FLAG_INHERIT) )
    {
      v9 = 617LL;
      goto LABEL_10;
    }
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_35409324>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_35409324>::GetImpl'::`2'::impl,
      v11);
    GetWindowThreadProcessId(v8, (LPDWORD)this + 172);
    if ( *((_DWORD *)this + 172) )
    {
      v15[1] = &qword_18098E108;
      _InterlockedAdd64(&qword_18098E108, 1uLL);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
      {
        v21 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>
                                                            + 88LL))(
                winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
                &v21);
        if ( v12 < 0 )
          winrt::throw_hresult((unsigned int)v12);
        v20 = v21;
        _InterlockedDecrement64(&qword_18098E108);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E108);
        v15[0] = _lambda_a5e19194432ba5e1a4e075778a86de15_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
          0LL,
          &v20,
          v15);
      }
      v14 = &v20;
      v15[2] = &qword_18098E128;
      _InterlockedAdd64(&qword_18098E128, 1uLL);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics> )
      {
        _lambda_967ba6ffebbbee34df142266fb8e05a9_::operator()(
          &v14,
          &v19,
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>);
        _InterlockedDecrement64(&qword_18098E128);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E128);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
          v13,
          &v19,
          &v14);
      }
      winrt::Windows::Foundation::IUnknown::operator=((char *)this + 696, &v19);
      if ( v19 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
      LODWORD(v19) = *((_DWORD *)this + 172);
      v16 = &v19;
      v17 = 1;
      winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        (char *)this + 696,
        &v16);
      if ( v20 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    }
  }
  return 0LL;
}

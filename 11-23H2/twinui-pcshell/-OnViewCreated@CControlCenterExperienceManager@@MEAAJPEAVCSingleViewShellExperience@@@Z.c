/*
 * XREFs of ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421040
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800B1504 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180173B48 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180173D4C (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 *     ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x18018D758 (--$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@-$factory_cache_entry@UInputGestureManag.c)
 *     ?GetForInputSite@?$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x18018D8B0 (-GetForInputSite@-$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureM.c)
 *     ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x1801B7940 (-ApproveProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     ?SetZBand@CControlCenterExperienceManager@@AEAAJXZ @ 0x180423084 (-SetZBand@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CControlCenterExperienceManager::OnViewCreated(
        CControlCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  int v4; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rax
  HWND v7; // rbx
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rcx
  int v11; // eax
  const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *(__fastcall *v12)(const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *, __int64); // [rsp+20h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-28h] BYREF
  __m128i v14; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  DWORD dwProcessId; // [rsp+70h] [rbp+20h] BYREF
  DWORD v17; // [rsp+78h] [rbp+28h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)this + 16, 1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x604,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  v7 = v6;
  if ( v6 )
  {
    if ( !SetPropW(v6, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x610,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    dwProcessId = 0;
    GetWindowThreadProcessId(v7, &dwProcessId);
    if ( dwProcessId )
    {
      v13[1] = &qword_18098E108;
      _InterlockedIncrement64(&qword_18098E108);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
      {
        winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
          &v18);
        _InterlockedDecrement64(&qword_18098E108);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E108);
        v12 = _lambda_a5e19194432ba5e1a4e075778a86de15_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
          v9,
          (__int64)&v18,
          (void (__fastcall **)(__int64, __int64 *))&v12);
      }
      v13[0] = &v18;
      v13[2] = &qword_18098E128;
      _InterlockedIncrement64(&qword_18098E128);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics> )
      {
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManagerStatics<winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::GetForInputSite(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>,
          &v19,
          &v18);
        _InterlockedDecrement64(&qword_18098E128);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098E128);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
          v10,
          (__int64)&v19,
          v13);
      }
      v17 = dwProcessId;
      v14.m128i_i64[0] = (__int64)&v17;
      v14.m128i_i32[2] = 1;
      winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        &v19,
        &v14);
      if ( v19 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
      if ( v18 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    }
  }
  v11 = CControlCenterExperienceManager::SetZBand((CControlCenterExperienceManager *)((char *)this - 104));
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  return 0LL;
}

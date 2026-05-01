/*
 * XREFs of _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::Run @ 0x1801EF0A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___--Run.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$try_get_value@I@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@I@std@@PEBG0K@Z @ 0x1801E7CEC (--$try_get_value@I@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$o.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E8174 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe_ea_1801E8174.c)
 *     ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801E8B28 (--1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManage.c)
 *     ??D?$fast_iterator@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWebSearchProvider@Shell@UI@WindowsUdk@2@XZ @ 0x1801E8CFC (--D-$fast_iterator@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Fou.c)
 *     ?AppId@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801EA230 (-AppId@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@.c)
 *     ?FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801EB2EC (-FindAll@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801ED8A4 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1801EF130 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1801EF698 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_9e570927e665d205f933b0ae213f3c70_::operator()(__int64 a1)
{
  __int64 v1; // r14
  bool v2; // di
  char v3; // bl
  int v4; // esi
  int v5; // eax
  winrt::hstring *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  winrt::hstring *v10; // rax
  const WCHAR *v11; // rax
  bool v12; // dl
  const char *v13; // r9
  int v14; // eax
  wil::reg::reg_view_details *lpData; // [rsp+20h] [rbp-1F8h]
  char v16; // [rsp+30h] [rbp-1E8h]
  char v17; // [rsp+31h] [rbp-1E7h]
  __int64 Data; // [rsp+38h] [rbp-1E0h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1D0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v22; // [rsp+58h] [rbp-1C0h]
  void *v23; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1B0h]
  _OWORD v25[3]; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-178h]
  int v27; // [rsp+A8h] [rbp-170h]
  __int64 v28; // [rsp+B0h] [rbp-168h]
  _QWORD v29[6]; // [rsp+C0h] [rbp-158h] BYREF
  _DWORD *v30; // [rsp+F0h] [rbp-128h]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  v1 = a1;
  v24 = a1;
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v29,
    a1);
  v29[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  if ( *v30 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v25,
      (struct wil::details::IFailureCallback *)v29,
      (const struct wil::details::StoredCallContextInfo *)(v30 + 10));
  }
  else
  {
    memset(v25, 0, sizeof(v25));
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
  }
  try
  {
    v2 = 0;
    v16 = 0;
    v3 = 0;
    v17 = 0;
    winrt::WindowsUdk::UI::Shell::WebSearchProvider::FindAll();
    *(_QWORD *)v21 = &v20;
    v4 = 0;
    v22 = 0;
    LODWORD(Data) = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, &Data);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    while ( v4 != (_DWORD)Data )
    {
      winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>>::operator*(
        (__int64 **)v21,
        (winrt *)v19);
      if ( (unsigned __int8)winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided(v19) )
      {
        v2 = 1;
        v16 = 1;
        v6 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::AppId(
                                 v19,
                                 &v23);
        winrt::hstring::c_str(v6);
        Data = -2147483647LL;
        LODWORD(lpData) = wil::reg::reg_view_details::get_value_flags_from_value_type(
                            (wil::reg::reg_view_details *)4,
                            v7);
        wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<unsigned int>(
          (__int64)&Data,
          (__int64)v21,
          v8,
          v9,
          lpData);
        winrt::hstring::~hstring(&v23);
        v3 = v21[1];
        v17 = v21[1];
        if ( !LOBYTE(v21[1]) )
        {
          v10 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::AppId(
                                    v19,
                                    v21);
          v11 = winrt::hstring::c_str(v10);
          SearchSettings::SearchSettingsHelper::SetIsIndividualWebSearchProviderEnabled(v11, v12);
          winrt::hstring::~hstring((void **)v21);
        }
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v19);
        break;
      }
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v19);
      v22 = ++v4;
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v20);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE8D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v13);
    v2 = v16;
    v3 = v17;
    v1 = v24;
  }
  LODWORD(Data) = 1;
  v14 = RegSetKeyValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
          L"HasSetWebSearchEnabledStateOnUpdate",
          4u,
          &Data,
          4u);
  if ( v14 > 0 )
    v14 = (unsigned __int16)v14 | 0x80070000;
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE8D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
    (SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v29,
    *(_BYTE *)(v1 + 320),
    *(_BYTE *)(v1 + 321),
    v2,
    v3);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v25);
  SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate((SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v29);
}

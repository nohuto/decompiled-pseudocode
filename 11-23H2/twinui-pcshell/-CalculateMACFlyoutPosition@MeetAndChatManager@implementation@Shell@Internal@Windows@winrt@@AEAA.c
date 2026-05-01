/*
 * XREFs of ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1806B0D08
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1806BFC40 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetAlignment@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800D5BC0 (-GetAlignment@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@w.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D5C18 (-Current@-$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@Win.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800D5C6C (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@URect@234@@impl@winrt@@QEBA@XZ @ 0x1800D6234 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@URect@Foundation@Windows@winrt@@@Fo.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarAlignment@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1800D62FC (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarAlignment@Shell@UI@Windows.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskbarLayout@Shell@UI@WindowsUdk@2@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x18019F4DC (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x180391498 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     ?GetLocation@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1806BDB60 (-GetLocation@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@wi.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x1806C0FD0 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarLocation@Shell@UI@WindowsU.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::CalculateMACFlyoutPosition(
        RTL_SRWLOCK *a1,
        __int64 a2,
        HWND a3,
        HWND a4)
{
  HMONITOR v7; // rax
  __int64 v8; // rsi
  int DpiForMonitor; // eax
  int v10; // r12d
  int v11; // r13d
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, SID *, GUID *, __int64 **); // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  void (__fastcall ***v22)(_QWORD, __int64 *, __int64 *); // rcx
  int v23; // r11d
  int v24; // ecx
  int v25; // edi
  int v26; // ebx
  int v27; // ebx
  LONG WindowLongW; // eax
  int v29; // r10d
  int v30; // r11d
  int v31; // r8d
  int v32; // r9d
  int v33; // r13d
  int v34; // edx
  int v35; // eax
  int v36; // r9d
  int v37; // r11d
  float v38; // xmm9_4
  float v39; // xmm7_4
  float *v40; // rdi
  RTL_SRWLOCK *v41; // rbx
  __int64 Location; // rax
  int v43; // eax
  int v45; // [rsp+28h] [rbp-E0h]
  int v46[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+50h] [rbp-B8h] BYREF
  const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *(__fastcall *v50)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A8h] BYREF
  int nNumerator[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v53; // [rsp+70h] [rbp-98h] BYREF
  __int128 v54; // [rsp+78h] [rbp-90h]
  RTL_SRWLOCK *v55; // [rsp+88h] [rbp-80h]
  __int64 *v56; // [rsp+90h] [rbp-78h]
  __int128 v57; // [rsp+98h] [rbp-70h] BYREF
  __int128 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v55 = a1;
  if ( a3 )
  {
    v7 = MonitorFromWindow(a3, 2u);
  }
  else
  {
    v47 = 0LL;
    v7 = MonitorFromPoint(0LL, 1u);
  }
  v8 = (__int64)v7;
  DpiForMonitor = GetDpiForMonitor(v7, 0LL, nNumerator, &nNumerator[1]);
  if ( DpiForMonitor < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x20F,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)DpiForMonitor,
      v45);
  LODWORD(v49) = MulDiv(362, nNumerator[0], 96);
  v10 = MulDiv(658, nNumerator[1], 96);
  LODWORD(v48) = MulDiv(12, nNumerator[0], 96);
  v11 = MulDiv(12, nNumerator[1], 96);
  v53 = 0LL;
  v12 = winrt::immersive_shell_component::get_site<IServiceProvider>(a1 + 2, &v47);
  v13 = *v12;
  v14 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 **))(*(_QWORD *)*v12 + 24LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)&v53);
  v15 = v14(v13, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v53);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x216,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v15,
      v45);
  if ( v47 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v47);
  v59 = 0LL;
  if ( a4 && GetPropW(a4, L"IsAutoHideEnabled") )
  {
    *(_QWORD *)v46 = 0LL;
    v16 = *v53;
    *(_QWORD *)v46 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, SID *, GUID *))(v16 + 72))(
            v53,
            v8,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x21E,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v17,
        (int)v46);
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v46 + 152LL))(*(_QWORD *)v46, &v59);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x21F,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v18,
        (int)v46);
  }
  else
  {
    *(_QWORD *)v46 = 0LL;
    v19 = *v53;
    *(_QWORD *)v46 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, int *))(v19 + 48))(v53, v8, v46);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x225,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v20,
        v45);
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v46 + 88LL))(*(_QWORD *)v46, &v59);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x226,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v21,
        v45);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v46);
  v56 = &qword_18098E3D8;
  _InterlockedIncrement64(&qword_18098E3D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
      &v51);
    _InterlockedDecrement64(&qword_18098E3D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E3D8);
    v50 = _lambda_a9de7e7a0851adce5db2c194794b7096_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
      v22,
      (__int64)&v51,
      (void (__fastcall **)(__int64, __int64 *))&v50);
  }
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetAlignment(
    &v51,
    &v47,
    v8);
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>,enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>::Value(&v47) == 1 )
  {
    v23 = DWORD2(v59);
    v24 = v59;
    v25 = v59 + (DWORD2(v59) - (int)v59) / 2 - (int)v49 / 2;
    v26 = HIDWORD(v59) - v11 - v10;
  }
  else
  {
    LODWORD(v50) = 5;
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
      &v51,
      v46,
      v8,
      (unsigned int *)&v50);
    v50 = 0LL;
    if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v46, &v50) )
    {
      WindowLongW = GetWindowLongW(a4, -20);
      v23 = DWORD2(v59);
      if ( (WindowLongW & 0x400000) != 0 )
        v25 = DWORD2(v59) - v48 - v49;
      else
        v25 = v48;
      v27 = HIDWORD(v59);
    }
    else
    {
      v25 = (int)*(float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                             v46,
                             &v57);
      v27 = (int)*((float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                              v46,
                              &v58)
                 + 1);
      v23 = DWORD2(v59);
    }
    v26 = v27 - v11 - v10;
    if ( *(_QWORD *)v46 )
    {
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v46);
      v23 = DWORD2(v59);
    }
    v24 = v59;
  }
  v29 = v24 + v48;
  LODWORD(v59) = v24 + v48;
  v30 = v23 - v48;
  DWORD2(v59) = v30;
  v31 = v11 + DWORD1(v59);
  DWORD1(v59) += v11;
  v32 = HIDWORD(v59) - v11;
  HIDWORD(v59) -= v11;
  v33 = v49;
  if ( v25 >= v30 - (int)v49 )
    v25 = v30 - v49;
  v34 = v24 + v48;
  if ( v25 > v29 )
    v34 = v25;
  if ( v26 >= v32 - v10 )
    v26 = v32 - v10;
  v35 = v31;
  if ( v26 > v31 )
    v35 = v26;
  v36 = v32 - v31;
  if ( v10 >= v36 )
    v10 = v36;
  v37 = v30 - v29;
  if ( (int)v49 >= v37 )
    v33 = v37;
  v38 = (float)v34;
  *(float *)&v54 = (float)v34;
  v39 = (float)v35;
  *((float *)&v54 + 1) = (float)v35;
  *((float *)&v54 + 3) = (float)v10;
  *((float *)&v54 + 2) = (float)v33;
  v40 = (float *)v55;
  v41 = v55 + 14;
  AcquireSRWLockExclusive(v55 + 14);
  v40[53] = v38;
  v40[54] = v39;
  v40[55] = (float)v33;
  v40[56] = (float)v10;
  if ( v41 )
    ReleaseSRWLockExclusive(v41);
  Location = winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetLocation(
               &v51,
               &v49,
               v8);
  v43 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarLocation>,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation>::Value(Location);
  *(_OWORD *)a2 = v54;
  *(_DWORD *)(a2 + 16) = v43;
  if ( v49 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v49);
  if ( v47 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v47);
  if ( v51 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v51);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
  return a2;
}

/*
 * XREFs of ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1801D0F48
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CE3A0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@URect@234@@impl@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x1800F994C (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@URect@Foundation@Windows@winrt@@@Fo.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarAlignment@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA?AW4TaskbarAlignment@Shell@UI@WindowsUdk@3@XZ @ 0x1800F9994 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarAlignment@Shell@UI@Windows.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@3@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800F9A70 (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ?GetAlignment@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IReference@W4TaskbarAlignment@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@3@_K@Z @ 0x1800F9AD8 (-GetAlignment@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@w.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800F9C44 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1803B5430 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     ?GetLocation@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$IReference@W4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@3@_K@Z @ 0x1805CC930 (-GetLocation@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@wi.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@W4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@impl@winrt@@QEBA?AW4TaskbarLocation@Shell@UI@WindowsUdk@3@XZ @ 0x1805CF478 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@W4TaskbarLocation@Shell@UI@WindowsU.c)
 */

// Hidden C++ exception states: #wind=10
_OWORD *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::CalculateMACFlyoutPosition(
        __int64 a1,
        _OWORD *a2,
        HWND a3,
        HWND a4)
{
  HMONITOR v6; // rax
  __int64 v7; // rsi
  int DpiForMonitor; // eax
  int v9; // r15d
  int v10; // r13d
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, SID *, GUID *, __int64 **); // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // edi
  int v25; // r9d
  int v26; // ebx
  int v27; // ebx
  int v28; // edx
  int v29; // ecx
  int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  __int64 Location; // rax
  int v34; // eax
  _OWORD *v35; // rbx
  int v37; // [rsp+20h] [rbp-59h]
  int v38[4]; // [rsp+30h] [rbp-49h] BYREF
  void (__fastcall ***v39)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  POINT pt; // [rsp+48h] [rbp-31h] BYREF
  int nNumerator; // [rsp+50h] [rbp-29h] BYREF
  int v42; // [rsp+54h] [rbp-25h] BYREF
  int v43; // [rsp+58h] [rbp-21h]
  __int64 *v44; // [rsp+60h] [rbp-19h] BYREF
  __int64 v45; // [rsp+68h] [rbp-11h] BYREF
  _OWORD *v46; // [rsp+70h] [rbp-9h]
  __int128 v47; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v46 = a2;
  if ( a3 )
  {
    v6 = MonitorFromWindow(a3, 2u);
  }
  else
  {
    pt = 0LL;
    v6 = MonitorFromPoint(0LL, 1u);
  }
  v7 = (__int64)v6;
  DpiForMonitor = GetDpiForMonitor(v6, 0LL, &nNumerator, &v42);
  if ( DpiForMonitor < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1FB,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)DpiForMonitor,
      v37);
  v43 = MulDiv(362, nNumerator, 96);
  v9 = MulDiv(658, v42, 96);
  v10 = MulDiv(12, nNumerator, 96);
  v11 = MulDiv(12, v42, 96);
  v44 = 0LL;
  v12 = winrt::immersive_shell_component::get_site<IServiceProvider>(a1 + 16, &v39);
  v13 = *(_QWORD *)v12;
  v14 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 **))(**(_QWORD **)v12 + 24LL);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v44);
  v15 = v14(v13, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v44);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x202,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v15,
      v37);
  if ( v39 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v39);
  v47 = 0LL;
  if ( a4 && GetPropW(a4, L"IsAutoHideEnabled") )
  {
    *(_QWORD *)v38 = 0LL;
    v16 = *v44;
    *(_QWORD *)v38 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, SID *, GUID *))(v16 + 72))(
            v44,
            v7,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20A,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v17,
        (int)v38);
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v38 + 152LL))(*(_QWORD *)v38, &v47);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20B,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v18,
        (int)v38);
  }
  else
  {
    *(_QWORD *)v38 = 0LL;
    v19 = *v44;
    *(_QWORD *)v38 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, int *))(v19 + 48))(v44, v7, v38);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x211,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v20,
        v37);
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v38 + 88LL))(*(_QWORD *)v38, &v47);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x212,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v21,
        v37);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v38);
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current(&pt);
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetAlignment(
    (__int64 *)&pt,
    &v45,
    v7);
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>,enum winrt::WindowsUdk::UI::Shell::TaskbarAlignment>::Value(&v45) == 1 )
  {
    v22 = DWORD2(v47);
    v23 = v47;
    v24 = v47 + (DWORD2(v47) - (int)v47) / 2 - v43 / 2;
    v25 = HIDWORD(v47);
    v26 = HIDWORD(v47) - v11 - v9;
  }
  else
  {
    v38[0] = 5;
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
      (__int64 *)&pt,
      &v39,
      v7,
      (unsigned int *)v38);
    *(_QWORD *)v38 = 0LL;
    if ( winrt::Windows::Foundation::operator==(&v39, v38) )
    {
      v24 = v10;
      v27 = HIDWORD(v47);
    }
    else
    {
      v24 = (int)*(float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                             &v39,
                             v38);
      v27 = (int)*((float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                              &v39,
                              v38)
                 + 1);
    }
    v26 = v27 - v11 - v9;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v39);
    v25 = HIDWORD(v47);
    v22 = DWORD2(v47);
    v23 = v47;
  }
  v28 = v23 + v10;
  LODWORD(v47) = v23 + v10;
  DWORD2(v47) = v22 - v10;
  v29 = v11 + DWORD1(v47);
  DWORD1(v47) += v11;
  v30 = v25 - v11;
  HIDWORD(v47) = v30;
  v31 = v22 - v10 - v43;
  if ( v24 >= v31 )
    v24 = v31;
  if ( v24 > v28 )
    v28 = v24;
  v32 = v30 - v9;
  if ( v26 >= v32 )
    v26 = v32;
  if ( v26 > v29 )
    v29 = v26;
  *(float *)v38 = (float)v28;
  *(float *)&v38[1] = (float)v29;
  *(float *)&v38[3] = (float)v9;
  *(float *)&v38[2] = (float)v43;
  Location = winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetLocation(
               &pt,
               &v39,
               v7);
  v34 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<enum winrt::WindowsUdk::UI::Shell::TaskbarLocation>,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation>::Value(Location);
  v35 = v46;
  *v46 = *(_OWORD *)v38;
  *((_DWORD *)v35 + 4) = v34;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v39);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v45);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&pt);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v44);
  return v35;
}

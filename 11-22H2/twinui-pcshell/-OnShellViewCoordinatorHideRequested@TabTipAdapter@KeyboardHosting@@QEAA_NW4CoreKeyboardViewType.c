/*
 * XREFs of ?OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUDismissShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528A9C
 * Callers:
 *     _lambda_2963e69eee30b127a29e593e76581bd4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x180204858 (_lambda_2963e69eee30b127a29e593e76581bd4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D9DC (-Options@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewReq.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$ShellViewCoordinatorRequested@IPEBGPEBG_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEBG1$$QEA_N@Z @ 0x18051E81C (--$ShellViewCoordinatorRequested@IPEBGPEBG_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$.c)
 *     ?GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI@Z @ 0x180522964 (-GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@T.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180528ED8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?TelemetryId@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18052DF0C (-TelemetryId@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Sh.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall KeyboardHosting::TabTipAdapter::OnShellViewCoordinatorHideRequested(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  char v6; // bl
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  signed int v9; // eax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  void *v15; // [rsp+30h] [rbp-20h] BYREF
  void *v16; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v17; // [rsp+40h] [rbp-10h] BYREF
  const unsigned __int16 *v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v20; // [rsp+88h] [rbp+38h] BYREF

  v6 = 0;
  v7 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Options(
         a3,
         &v20);
  winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions<winrt::WindowsUdk::UI::Shell::IDismissShellViewOptions>::TelemetryId(
    v7,
    &v16);
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  v8 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Options(
         a3,
         &v14);
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)*v8 + 64LL))(*v8, &v20);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  v15 = v20;
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  LOBYTE(v20) = 0;
  v17 = winrt::hstring::c_str((winrt::hstring *)&v15);
  v18 = winrt::hstring::c_str((winrt::hstring *)&v16);
  v13 = a2;
  TouchKeyboardExperienceTelemetryLogger::ShellViewCoordinatorRequested<unsigned int,unsigned short const *,unsigned short const *,bool>(
    (int *)&v13,
    (__int64 *)&v18,
    (__int64 *)&v17,
    (char *)&v20);
  v12 = -1;
  if ( KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists(a1, a2, (__int64)&v12) )
  {
    v10 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(a1, 2LL, v12);
    if ( v10 >= 0 )
      v6 = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8FB,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v10);
  }
  winrt::hstring::~hstring(&v15);
  winrt::hstring::~hstring(&v16);
  return v6;
}

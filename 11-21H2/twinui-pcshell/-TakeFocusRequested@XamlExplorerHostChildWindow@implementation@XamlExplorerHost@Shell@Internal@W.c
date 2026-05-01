/*
 * XREFs of ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1800FBA04
 * Callers:
 *     ?add_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x1800FBC50 (-add_TakeFocusRequested@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@S.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?add@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x1800FB5C4 (-add@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@W.c)
 *     ?TakeFocusRequested@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800FB998 (-TakeFocusRequested@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXa.c)
 *     ??4?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800FBAE0 (--4-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIDes.c)
 *     ??1?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1800FBB54 (--1-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIDes.c)
 *     ??$?0UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@P80123456@EAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@56@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@89UI@56@@Z@?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@23@P84567823@EAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@23@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@23@@Z@Z @ 0x1800FBB74 (--$-0UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
PVOID *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::TakeFocusRequested(
        __int64 a1,
        PVOID *a2,
        void (__fastcall ****a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v6; // r8
  __int64 v7; // rax
  void (__fastcall *v9)(winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *__hidden, const struct winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *, const struct winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs *); // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 32), &v13) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA7,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostchildwindow.cpp",
      (const char *)0x8007139FLL,
      (int)v9);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v9 = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::OnTakeFocusRequested;
    v10 = 0;
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
      &v13,
      a1,
      &v9);
    v7 = winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::TakeFocusRequested(
           (_QWORD *)(a1 + 32),
           (__int64)v11,
           v6,
           &v13);
    __4__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      a1 + 40,
      v7);
    __1__event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ(v11);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  }
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>::add(
    (RTL_SRWLOCK *)(a1 + 96),
    a2,
    a3);
  return a2;
}

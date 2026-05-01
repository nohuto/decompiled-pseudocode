/*
 * XREFs of ??$get_weak@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAA?AU?$weak_ref@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800DC048
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E8760 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18012C120 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1806BDE2C (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1806BFC40 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ?make_weak_ref@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800A4BD8 (-make_weak_ref@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapIn.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::get_weak<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  void *weak_ref; // rax
  int v4; // eax
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-20h] BYREF
  void *v7; // [rsp+60h] [rbp+18h] BYREF

  weak_ref = winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    pExceptionObject[2] = 0LL;
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    throw (std::bad_alloc *)pExceptionObject;
  }
  v7 = weak_ref;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}

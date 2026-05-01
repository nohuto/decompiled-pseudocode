/*
 * XREFs of ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18051B9E8
 * Callers:
 *     _lambda_4b0775d64c2392808fe7dff402e255dc_::operator() @ 0x180207574 (_lambda_4b0775d64c2392808fe7dff402e255dc_--operator().c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EffectiveSetting@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801BC878 (-EffectiveSetting@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSe.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?InvokeIsPrimaryViewInvokedBySystemButton@TabTipAdapter@KeyboardHosting@@QEAA_NXZ @ 0x180524DC8 (-InvokeIsPrimaryViewInvokedBySystemButton@TabTipAdapter@KeyboardHosting@@QEAA_NXZ.c)
 *     ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180530190 (-RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA-AV-$basic_string_vi.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateInvocationMethodShellPreference(
        TouchKeyboardExperienceManager *this)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 *v3; // rbx
  signed int v4; // eax
  winrt::impl *hstring_on_heap; // rbx
  KeyboardHosting::TabTipAdapter *v6; // rdi
  int v7; // eax
  char v8[8]; // [rsp+30h] [rbp-48h] BYREF
  winrt::impl *v9; // [rsp+38h] [rbp-40h] BYREF
  winrt::impl *v10; // [rsp+40h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v12; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 277);
  v3 = (__int64 *)((char *)this + 2192);
  v8[0] = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 274) + 56LL))(*((_QWORD *)this + 274), v8);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::EffectiveSetting(v3);
  KeyboardHosting::TabTipAdapter::InvokeIsPrimaryViewInvokedBySystemButton(*((KeyboardHosting::TabTipAdapter **)this + 73));
  KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShow(v2, v8[0]);
  if ( v10 )
  {
    hstring_on_heap = winrt::impl::create_hstring_on_heap(v9, (winrt::impl *)(unsigned int)v10);
    v9 = hstring_on_heap;
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"InvocationMethod", 0x11u, 0x10u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v12, (HSTRING)hstring_on_heap);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18E2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v9);
  }
}

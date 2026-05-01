/*
 * XREFs of ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180418054
 * Callers:
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1801B8180 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_unsigned_int_unsigned_int___::cancel_asynchronously$_ResumeCoro$1 @ 0x1801DD2D0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress_unsigned_int_.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18021BA90 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously$_ResumeCoro$1 @ 0x180253260 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windo_ea_180253260.c)
 *     _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18069EA68 (_anonymous_namespace_--PinConsentPromptManager--_PinConsentPromptManager.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  signed int v3; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v4 = 0LL;
    (**(void (__fastcall ***)(__int64, const wchar_t *, __int64 *))v1)(v1, L"6", &v4);
    v1 = v4;
    v2 = v4;
  }
  else
  {
    v2 = 0LL;
  }
  v5 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
}

/*
 * XREFs of ?RunEventLoop@?$consume_Microsoft_UI_Dispatching_IDispatcherQueue3@UDispatcherQueue@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002E210
 * Callers:
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x18002E800 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueue3<winrt::Microsoft::UI::Dispatching::DispatcherQueue>::RunEventLoop(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Microsoft::UI::Dispatching::IDispatcherQueue3>,
      &v5);
    v1 = v5;
    v2 = v5;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}

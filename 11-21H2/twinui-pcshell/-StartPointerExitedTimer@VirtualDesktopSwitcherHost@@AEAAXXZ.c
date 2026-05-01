/*
 * XREFs of ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060C0D0
 * Callers:
 *     _lambda_3591e69cd7734f7f9a496e70d8c5fafc_::operator() @ 0x1806083B4 (_lambda_3591e69cd7734f7f9a496e70d8c5fafc_--operator().c)
 *     _lambda_a4fc72a842dbf7eb265aa59110ec49be_::operator() @ 0x180608654 (_lambda_a4fc72a842dbf7eb265aa59110ec49be_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?AUThreadPoolTimer@Threading@System@Windows@2@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x180329E08 (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA?AUThreadPoolTimer@Threading@System@Windows@3@AEBUTimerElapsedHandler@5673@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18032DF0C (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397___ @ 0x1806058EC (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_b9ce315f83a5.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x180606394 (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall VirtualDesktopSwitcherHost::StartPointerExitedTimer(VirtualDesktopSwitcherHost *this)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v3[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+28h] BYREF
  __int64 v8; // [rsp+78h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 448) )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
    wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(v3, &v5);
    v7 = v3[0];
    if ( v3[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3[0] + 8LL))(v3[0]);
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397___(
      &v6,
      &v7);
    v8 = 1000000LL;
    v4[0] = &v6;
    v4[1] = &v8;
    v3[1] = (__int64)&qword_1807B5CE8;
    _InterlockedIncrement64(&qword_1807B5CE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
        &v5,
        &v6,
        &v8);
      _InterlockedDecrement64(&qword_1807B5CE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B5CE8);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
        v2,
        (__int64)&v5,
        v4);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (VirtualDesktopSwitcherHost *)((char *)this + 392),
      (winrt::Windows::Foundation::IUnknown *)&v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v3);
  }
}

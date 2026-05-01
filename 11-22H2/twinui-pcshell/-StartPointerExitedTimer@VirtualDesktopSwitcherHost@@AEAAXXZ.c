/*
 * XREFs of ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1807768F4
 * Callers:
 *     _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x180772744 (_lambda_828944ce103634e2e050a423f7a4c10d_--operator().c)
 *     _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x180772928 (_lambda_95528747bebe02d956eab525d53e8eb3_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1802D2ED0 (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x1803F734C (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_eba64241e9b90ff96c214d869f8d7087___ @ 0x1807700DC (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_eba64241e9b9.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x180770938 (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall VirtualDesktopSwitcherHost::StartPointerExitedTimer(VirtualDesktopSwitcherHost *this)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v3[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v4[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+28h] BYREF
  __int64 v8; // [rsp+78h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 456) )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
    wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(v3, &v5);
    v7 = v3[0];
    if ( v3[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3[0] + 8LL))(v3[0]);
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_eba64241e9b90ff96c214d869f8d7087___(
      &v6,
      &v7);
    v8 = 3330000LL;
    v4[0] = &v6;
    v4[1] = &v8;
    v3[1] = (__int64)&qword_180990CE8;
    _InterlockedIncrement64(&qword_180990CE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
        &v5,
        &v6,
        &v8);
      _InterlockedDecrement64(&qword_180990CE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990CE8);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
        v2,
        &v5,
        v4);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (VirtualDesktopSwitcherHost *)((char *)this + 400),
      (winrt::Windows::Foundation::IUnknown *)&v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v3);
  }
}

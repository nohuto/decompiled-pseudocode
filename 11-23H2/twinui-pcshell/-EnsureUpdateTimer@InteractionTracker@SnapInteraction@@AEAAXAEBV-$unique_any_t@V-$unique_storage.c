/*
 * XREFs of ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18066FA44
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800306EC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18066FC3C (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@?$root_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAA?AU?$weak_ref@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802D37E4 (--$get_weak@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@w.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___ @ 0x18066F63C (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_ee45b6845675.c)
 *     ??$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@Z @ 0x18066F848 (--$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ?CreatePeriodicTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18066F9DC (-CreatePeriodicTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTime.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall SnapInteraction::InteractionTracker::EnsureUpdateTimer(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v2; // rbx
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  __int64 v10; // [rsp+78h] [rbp+30h] BYREF

  v8 = a2;
  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 112);
  if ( !*(_QWORD *)(a1 + 112) )
  {
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::get_weak<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>(
      (volatile signed __int64 *)(a1 + 24),
      &v8);
    v3 = v8;
    v8 = 0LL;
    v10 = v3;
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___(
      &v9,
      &v10);
    if ( v8 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
    v5[0] = 3000000000LL;
    v6[0] = &v9;
    v6[1] = v5;
    v5[1] = &qword_180990CE8;
    _InterlockedIncrement64(&qword_180990CE8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreatePeriodicTimer(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
        &v7,
        &v9,
        v5);
      _InterlockedDecrement64(&qword_180990CE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990CE8);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_dde458f71422ec207fa0d1766485f8dd_ &>(
        v4,
        (__int64)&v7,
        v6);
    }
    winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v7);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
}

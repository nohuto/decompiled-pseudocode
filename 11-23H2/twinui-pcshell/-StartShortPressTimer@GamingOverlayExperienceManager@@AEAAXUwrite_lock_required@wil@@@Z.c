/*
 * XREFs of ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180407D28
 * Callers:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180400338 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1802D2ED0 (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x1803F734C (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingOverlayExperienceManager::StartShortPressTimer(__int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  char *v3; // rax
  __m128d v4; // [rsp+20h] [rbp-50h]
  _QWORD *v5[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v6[2]; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+90h] [rbp+20h] BYREF
  char *v8; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+38h] BYREF

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 280);
  if ( *(_BYTE *)(a1 + 288) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 280));
    *(_BYTE *)(a1 + 288) = 0;
  }
  v9 = 10000LL * *(_QWORD *)(a1 + 320);
  *(_QWORD *)&v4.m128d_f64[0] = GamingOverlayExperienceManager::OnShortPressTimer;
  LODWORD(v4.m128d_f64[1]) = 0;
  *(_QWORD *)&v6[0] = a1;
  *(__m128d *)((char *)v6 + 8) = v4;
  v3 = (char *)operator new(0x28uLL);
  *(_OWORD *)(v3 + 8) = v6[0];
  *((_QWORD *)v3 + 3) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v3 + 8) = 1;
  *(_QWORD *)v3 = &winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_6c843e279f28a538fde4193809616d7e_>::`vftable';
  v8 = v3;
  v5[0] = &v8;
  v5[1] = &v9;
  _InterlockedIncrement64(&qword_180990CE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
      &v7,
      &v8,
      &v9);
    _InterlockedDecrement64(&qword_180990CE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990CE8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_6c843e279f28a538fde4193809616d7e_>::`vftable',
      &v7,
      v5);
  }
  winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  *(_BYTE *)(a1 + 288) = 1;
}

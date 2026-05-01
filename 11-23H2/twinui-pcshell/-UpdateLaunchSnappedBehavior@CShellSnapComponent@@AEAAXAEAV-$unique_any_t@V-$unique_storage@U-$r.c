/*
 * XREFs of ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658
 * Callers:
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180142FE0 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RevokeSnapIds@CShellSnapComponent@@AEAAXXZ @ 0x1801B885C (-RevokeSnapIds@CShellSnapComponent@@AEAAXXZ.c)
 *     ?GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows@@@Z @ 0x180221E50 (-GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows.c)
 *     ?RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z @ 0x180221FA0 (-RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z.c)
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18065FEC0 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x180660A40 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?empty@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NXZ @ 0x180133394 (-empty@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1801D68E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x1803F734C (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ??R_lambda_b19cf72fe9674443383aa89d5c22450b_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@Z @ 0x1803FA1D4 (--R_lambda_b19cf72fe9674443383aa89d5c22450b_@@QEBA@AEBUIThreadPoolTimerStatics@Threading@System@.c)
 *     ??0apartment_context@winrt@@QEAA@AEBU01@@Z @ 0x1804167F4 (--0apartment_context@winrt@@QEAA@AEBU01@@Z.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x18065CCEC (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_3415c00afb73.c)
 *     ??$com_weak_query_failfast@PEAVCShellSnapComponent@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVCShellSnapComponent@@@Z @ 0x18065E828 (--$com_weak_query_failfast@PEAVCShellSnapComponent@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr.c)
 *     ?TryGetCustomDuration@CShellSnapComponent@@AEAA?AV?$optional@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@std@@PEBG@Z @ 0x1806654C8 (-TryGetCustomDuration@CShellSnapComponent@@AEAA-AV-$optional@V-$duration@_JU-$ratio@$00$0DOI@@st.c)
 */

void __fastcall CShellSnapComponent::UpdateLaunchSnappedBehavior(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rdi
  unsigned __int8 v4; // si
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CustomDuration; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v13[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF
  _BYTE v17[24]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 v19; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+30h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+38h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+40h] BYREF

  v20 = a2;
  v3 = (winrt::Windows::Foundation::IUnknown *)(a1 + 1736);
  if ( *(_QWORD *)(a1 + 1736) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 1736));
    v20 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v3, (winrt::Windows::Foundation::IUnknown *)&v20);
    if ( v20 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  }
  if ( *(_QWORD *)(a1 + 1552)
    || wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl)
    && !std::wstring::empty(a1 + 1752) )
  {
    v4 = 1;
    winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v14);
    v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
    v5 = wil::com_weak_query_failfast<CShellSnapComponent *>(&v22, &v21);
    v6 = *v5;
    *v5 = 0LL;
    v16 = v6;
    winrt::apartment_context::apartment_context(
      (winrt::apartment_context *)v17,
      (const struct winrt::apartment_context *)v14);
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___(
      &v19,
      (__int64)&v16);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v22);
    CustomDuration = CShellSnapComponent::TryGetCustomDuration(v7, (__int64)v15, v8);
    if ( *(_BYTE *)(CustomDuration + 8) )
      v10 = *(_QWORD *)CustomDuration;
    else
      v10 = 30000LL;
    v12 = 10000 * v10;
    v13[0] = &v19;
    v13[1] = &v12;
    _InterlockedAdd64(&qword_180990CE8, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
    {
      _lambda_b19cf72fe9674443383aa89d5c22450b_::operator()(
        v13,
        &v20,
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>);
      _InterlockedDecrement64(&qword_180990CE8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990CE8);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))(10000 * v10),
        &v20,
        v13);
    }
    winrt::Windows::Foundation::IUnknown::operator=(v3, (winrt::Windows::Foundation::IUnknown *)&v20);
    if ( v20 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    if ( v19 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
    if ( v14[0] )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v14);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 != *(_BYTE *)(a1 + 1728) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 432) + 56LL))(
            *(_QWORD *)(a1 + 432),
            32LL,
            32 * (unsigned int)v4);
    if ( v11 >= 0 )
      *(_BYTE *)(a1 + 1728) = v4;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6AD,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v11);
  }
}

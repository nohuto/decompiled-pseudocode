/*
 * XREFs of ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180091D0C
 * Callers:
 *     _lambda_a559d9d153ff13884aee4458555631f0_::operator() @ 0x1801E9680 (_lambda_a559d9d153ff13884aee4458555631f0_--operator().c)
 * Callees:
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x180017E84 (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180038A98 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x180038ACC (--4-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEA.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008EEB8 (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008EED8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RequestHideView@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBW4HideViewBehaviorOptions@5673@@Z @ 0x18008EF20 (-RequestHideView@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Windo.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B9DA4 (--B-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1800B9DC8 (--0-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UndockedSearchAppExperienceManager::RequestSearchAppToHideInternal(volatile signed __int32 **this)
{
  volatile signed __int32 **v2; // rbx
  volatile signed __int32 *v3; // rax
  RTL_SRWLOCK *v4; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-49h] BYREF
  __int64 v10; // [rsp+28h] [rbp-41h] BYREF
  void **v11; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-31h] BYREF
  int v13; // [rsp+50h] [rbp-19h]
  LPVOID pv; // [rsp+60h] [rbp-9h]
  __int64 *v15; // [rsp+68h] [rbp-1h]
  _BYTE v16[8]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v17[24]; // [rsp+78h] [rbp+Fh] BYREF
  int v18; // [rsp+90h] [rbp+27h]
  LPVOID v19; // [rsp+A0h] [rbp+37h]
  const struct winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics *(__fastcall *v20)(const struct winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics *, __int64); // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(v16);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool(this + 108) )
  {
    v2 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data(this + 108);
    v11 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v12,
      (struct wil::details::IFailureCallback *)&v11,
      0LL,
      1);
    v3 = *v2;
    pv = (LPVOID)v3;
    if ( v3 )
      _InterlockedIncrement(v3 + 82);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator=(
      (__int64)v16,
      (__int64)&v11);
    if ( pv )
      tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)pv);
    if ( v13 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  }
  v22 = 0LL;
  v4 = (RTL_SRWLOCK *)(this + 36);
  AcquireSRWLockShared((PSRWLOCK)this + 36);
  v5 = (winrt::Windows::Foundation::IUnknown *)(this + 37);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)&v22);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  v10 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&v22, &v10) )
  {
    v15 = &qword_18098E048;
    _InterlockedIncrement64(&qword_18098E048);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
    {
      v9 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>
                                                         + 48LL))(
             winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
             &v9);
      if ( v7 < 0 )
        winrt::throw_hresult((unsigned int)v7);
      v23 = v9;
      _InterlockedDecrement64(&qword_18098E048);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E048);
      v20 = _lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
        0LL,
        (__int64)&v23,
        (void (__fastcall **)(__int64, __int64 *))&v20);
    }
    winrt::Windows::Foundation::IUnknown::operator=(&v22, &v23);
    if ( v23 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
    AcquireSRWLockExclusive(v4);
    v20 = 0LL;
    if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v5, &v20) )
      winrt::Windows::Foundation::IUnknown::operator=(v5);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  v8 = SearchAppLauncherLogging::Provider(v6);
  if ( *(_DWORD *)v8 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v8,
      (int)&unk_1808542AE,
      0);
  LODWORD(v20) = 0;
  v21 = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::RequestHideView(
    &v22,
    &v21,
    (unsigned int *)&v20);
  if ( v22 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  if ( v19 )
    tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)v19);
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
}

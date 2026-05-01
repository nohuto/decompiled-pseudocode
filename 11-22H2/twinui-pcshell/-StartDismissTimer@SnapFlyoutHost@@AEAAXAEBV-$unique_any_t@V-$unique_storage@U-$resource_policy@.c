/*
 * XREFs of ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18067CA0C
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$get_weak@VSnapFlyoutHost@@@?$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x180111358 (--$get_weak@VSnapFlyoutHost@@@-$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Window.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1802D2ED0 (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x1803F734C (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ?TryGetCustomDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@PEBGV234@@Z @ 0x18067D000 (-TryGetCustomDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@PEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapFlyoutHost::StartDismissTimer(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-19h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  __int64 v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-1h] BYREF
  __int64 v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+Fh]
  _QWORD *v13[2]; // [rsp+60h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+70h] [rbp+27h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_180874ADB, 0LL, 0LL, 2u, &v14);
  winrt::impl::root_implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak<SnapFlyoutHost>(
    a1,
    &v8);
  v3 = v8;
  v8 = 0LL;
  v7 = v3;
  v12 = &v7;
  v4 = (__int64 *)operator new(0x18uLL);
  v12 = v4;
  v5 = v7;
  v7 = 0LL;
  v4[1] = v5;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 4) = 1;
  *v4 = (__int64)off_1807C8C50;
  v10 = v4;
  if ( v7 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
  if ( v8 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  v6 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180992AE8 > *(_DWORD *)(v6 + 16) )
  {
    Init_thread_header(&dword_180992AE8);
    if ( dword_180992AE8 == -1 )
    {
      SnapFlyoutHost::TryGetCustomDuration(&qword_180992AF0, L"SFDismissDelay", 200LL);
      Init_thread_footer(&dword_180992AE8);
    }
  }
  v11 = 10000 * qword_180992AF0;
  v13[0] = &v10;
  v13[1] = &v11;
  v12 = &qword_180990CE8;
  _InterlockedIncrement64(&qword_180990CE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
      &v9,
      &v10,
      &v11);
    _InterlockedDecrement64(&qword_180990CE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990CE8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v6,
      &v9,
      v13);
  }
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 64),
    (winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
}

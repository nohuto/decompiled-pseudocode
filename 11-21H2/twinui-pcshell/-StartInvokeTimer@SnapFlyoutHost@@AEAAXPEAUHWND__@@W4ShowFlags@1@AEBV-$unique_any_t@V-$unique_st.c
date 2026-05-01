/*
 * XREFs of ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0B94
 * Callers:
 *     SnapFlyoutHost::ShowAsync$_ResumeCoro$1 @ 0x1801C0B90 (SnapFlyoutHost--ShowAsync$_ResumeCoro$1.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?AUThreadPoolTimer@Threading@System@Windows@2@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x180329E08 (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA?AUThreadPoolTimer@Threading@System@Windows@3@AEBUTimerElapsedHandler@5673@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18032DF0C (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     ??$get_weak@VSnapFlyoutHost@@@?$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1803411C8 (--$get_weak@VSnapFlyoutHost@@@-$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Window.c)
 *     ?TryGetCustomDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@PEBGV234@@Z @ 0x1805B109C (-TryGetCustomDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@PEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapFlyoutHost::StartInvokeTimer(volatile signed __int64 *a1, __int64 a2, int a3)
{
  _DWORD *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-19h] BYREF
  __int64 v14; // [rsp+50h] [rbp-11h] BYREF
  __int64 v15; // [rsp+58h] [rbp-9h]
  int v16; // [rsp+60h] [rbp-1h]
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  __int64 *v18; // [rsp+70h] [rbp+Fh]
  _QWORD v19[2]; // [rsp+78h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+88h] [rbp+27h] BYREF

  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)a1,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_1806CB689, 0LL, 0LL, 2u, &v20);
  winrt::impl::root_implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak<SnapFlyoutHost>(
    a1,
    &v11);
  v7 = v11;
  v11 = 0LL;
  v14 = v7;
  v15 = a2;
  v16 = a3;
  v18 = &v14;
  v8 = (__int64 *)operator new(0x28uLL);
  v18 = v8;
  v9 = v14;
  v14 = 0LL;
  v8[1] = v9;
  v8[2] = v15;
  *((_DWORD *)v8 + 6) = v16;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 8) = 1;
  *v8 = (__int64)off_180645398;
  v13 = v8;
  if ( v14 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
  if ( v11 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  v10 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1807B75C8 > *(_DWORD *)(v10 + 16) )
  {
    Init_thread_header(&dword_1807B75C8);
    if ( dword_1807B75C8 == -1 )
    {
      SnapFlyoutHost::TryGetCustomDuration(&qword_1807B75D0, L"SFInvokeDelay", 600LL);
      Init_thread_footer(&dword_1807B75C8);
    }
  }
  v17 = 10000 * qword_1807B75D0;
  v19[0] = &v13;
  v19[1] = &v17;
  v18 = &qword_1807B5CE8;
  _InterlockedIncrement64(&qword_1807B5CE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
      &v12,
      &v13,
      &v17);
    _InterlockedDecrement64(&qword_1807B5CE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B5CE8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v10,
      (__int64)&v12,
      v19);
  }
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 7),
    (winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
}

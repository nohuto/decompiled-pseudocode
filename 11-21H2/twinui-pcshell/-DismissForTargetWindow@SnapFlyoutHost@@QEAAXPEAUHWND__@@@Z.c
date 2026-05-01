/*
 * XREFs of ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805AF134
 * Callers:
 *     ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x180127D20 (-OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z.c)
 *     ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180131000 (-OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180035E88 (-TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyou.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?InternalHideAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C0A4C (-InternalHideAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$unique_st.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18032D85C (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?SnapFlyout_CancelInvokeTimer@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B0624 (-SnapFlyout_CancelInvokeTimer@SnapFlyoutTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::DismissForTargetWindow(RTL_SRWLOCK *this, HWND a2)
{
  _DWORD *v4; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-9h] BYREF
  HWND v6; // [rsp+40h] [rbp-1h] BYREF
  std::_Ref_count_base *v7; // [rsp+48h] [rbp+7h]
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp+17h] BYREF
  HWND *v10; // [rsp+78h] [rbp+37h]
  int v11; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+84h] [rbp+43h]

  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v6 = a2;
    v10 = &v6;
    v11 = 8;
    v12 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1806CB4F9, 0LL, 0LL, 3u, &v9);
  }
  wil::AcquireSRWLockExclusive(&v8, this + 18);
  if ( this[7].Ptr )
  {
    SnapFlyoutTelemetry::SnapFlyout_CancelInvokeTimer();
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&this[7].Ptr);
    v6 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&this[7],
      (winrt::Windows::Foundation::IUnknown *)&v6);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  SnapFlyoutHost::TryGetVisibleFlyoutInstance((__int64)this, &v6);
  if ( v6 && *(HWND *)(*((_QWORD *)v6 + 2) + 288LL) == a2 )
    SnapFlyoutHost::InternalHideAsync((__int64)this, v5, (__int64)&v8);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
}

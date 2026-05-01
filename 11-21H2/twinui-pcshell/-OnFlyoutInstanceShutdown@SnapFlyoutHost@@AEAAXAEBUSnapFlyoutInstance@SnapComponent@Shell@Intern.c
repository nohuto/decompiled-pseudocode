/*
 * XREFs of ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805AFE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4898 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     _lambda_ea48c415f368778e5bf263367a992acf_::operator() @ 0x1805AEF98 (_lambda_ea48c415f368778e5bf263367a992acf_--operator().c)
 *     ?Id@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x1805AF388 (-Id@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@Snap.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapFlyoutHost::OnFlyoutInstanceShutdown(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 *Ptr; // rdi
  __int64 *v8; // rbx
  __int64 *i; // rsi
  __int64 v10; // rsi
  const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *v11; // [rsp+30h] [rbp-50h] BYREF
  const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *v12; // [rsp+38h] [rbp-48h] BYREF
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-38h] BYREF
  const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance **v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]

  v4 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Id((__int64 *)a2);
  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v5,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    LODWORD(v11) = v4;
    v15 = &v11;
    v16 = 4;
    v17 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_1806CB3A9, 0LL, 0LL, 3u, &v14);
  }
  wil::AcquireSRWLockExclusive(&v13, this + 18);
  Ptr = (__int64 *)this[4].Ptr;
  v8 = (__int64 *)this[3].Ptr;
  v12 = a2;
  v11 = a2;
  while ( v8 != Ptr && !lambda_ea48c415f368778e5bf263367a992acf_::operator()(&v11, (__int64)v8) )
    v8 += 2;
  if ( v8 != Ptr )
  {
    for ( i = v8 + 2; i != Ptr; i += 2 )
    {
      if ( !lambda_ea48c415f368778e5bf263367a992acf_::operator()(&v12, (__int64)i) )
      {
        std::shared_ptr<KBViewInfo>::operator=(v8, i);
        v8 += 2;
      }
    }
    if ( v8 != Ptr )
    {
      v10 = (__int64)this[4].Ptr;
      if ( Ptr != (__int64 *)v10 )
      {
        do
        {
          std::shared_ptr<KBViewInfo>::operator=(v8, Ptr);
          v8 += 2;
          Ptr += 2;
        }
        while ( Ptr != (__int64 *)v10 );
        v10 = (__int64)this[4].Ptr;
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>((__int64)v8, v10);
      this[4].Ptr = v8;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
}

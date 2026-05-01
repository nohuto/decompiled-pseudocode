/*
 * XREFs of ?OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805AFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Id@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x1805AF388 (-Id@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@Snap.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::OnFlyoutInstanceReady(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  _QWORD *Ptr; // rbx
  _QWORD *v8; // rdi
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  signed int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  signed int v17; // eax
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-19h] BYREF
  __int64 v19; // [rsp+38h] [rbp-11h] BYREF
  std::_Ref_count_base *v20; // [rsp+40h] [rbp-9h]
  std::_Ref_count_base *v21[2]; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+58h] [rbp+Fh] BYREF
  RTL_SRWLOCK **v23; // [rsp+78h] [rbp+2Fh]
  int v24; // [rsp+80h] [rbp+37h]
  int v25; // [rsp+84h] [rbp+3Bh]

  v4 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Id((__int64 *)a2);
  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   v5,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    LODWORD(v18) = v4;
    v23 = &v18;
    v24 = 4;
    v25 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_1806CB375, 0LL, 0LL, 3u, &v22);
  }
  wil::AcquireSRWLockExclusive(&v18, this + 18);
  Ptr = this[3].Ptr;
  v8 = this[4].Ptr;
  while ( 1 )
  {
    if ( Ptr == v8 )
    {
      *(_OWORD *)v21 = 0LL;
      goto LABEL_8;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*Ptr + 16LL) + 280LL) == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Id((__int64 *)a2) )
      break;
    Ptr += 2;
  }
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v21,
    Ptr);
LABEL_8:
  v9 = (__int64 *)v21[0];
  if ( v21[0] )
  {
    if ( LODWORD(this[6].Ptr) == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Id((__int64 *)a2) )
    {
      v10 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(v9);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v19,
        v10);
      v11 = v19;
      tip::details::test_common_data<1>::begin_update(v19 + 8);
      v12 = v11 + 152;
      if ( !v11 )
        v12 = 8LL;
      *(_BYTE *)v12 = 1;
      if ( v11 )
      {
        tip::details::test_common_data<1>::end_update(v11 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v19);
      }
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2);
      if ( v13 < 0 )
        winrt::throw_hresult(v13);
    }
    else
    {
      v14 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(v9);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v19,
        v14);
      v15 = v19;
      tip::details::test_common_data<1>::begin_update(v19 + 8);
      v16 = v15 + 153;
      if ( !v15 )
        v16 = 9LL;
      *(_BYTE *)v16 = 1;
      if ( v15 )
      {
        tip::details::test_common_data<1>::end_update(v15 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v19);
      }
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 56LL))(*(_QWORD *)a2);
      if ( v17 < 0 )
        winrt::throw_hresult(v17);
    }
    tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v9);
  }
  if ( v21[1] )
    std::_Ref_count_base::_Decref(v21[1]);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
}

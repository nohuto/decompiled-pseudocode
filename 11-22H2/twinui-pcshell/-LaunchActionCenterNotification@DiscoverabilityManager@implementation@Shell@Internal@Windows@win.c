/*
 * XREFs of ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB5C8
 * Callers:
 *     _lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator() @ 0x18025C2B0 (_lambda_3af96972622813cad57e0b9ae8d4dbe0_--operator().c)
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1806FB770 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806FC390 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x1806F81D8 (--$open_and_watch_errors@V-$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB2F8 (-InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UAppInfo@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1806FC2A4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppInfo@ApplicationMo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::LaunchActionCenterNotification(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *); // r14
  __int64 v5; // rcx
  int v6; // r14d
  __int64 v7; // rbx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-48h]
  _BYTE v13[48]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_DiscoverabilityManagerTipTest>>((struct wil::details::IFailureCallback *)v13);
  v2 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>,winrt::Windows::ApplicationModel::AppInfo>::Size((char *)this + 408) )
  {
LABEL_15:
    tip::details::test_common_data<1>::complete(v14[0] + 8LL);
    goto LABEL_19;
  }
  v3 = *((_QWORD *)this + 14);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
  v5 = v16;
  v16 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = v4(v3, &v16);
  if ( v6 < 0 )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v11,
      v14);
    v7 = v11;
    tip::details::test_common_data<1>::begin_update(v11 + 8);
    v8 = (_BYTE *)(v7 + 187);
    v9 = 11LL;
LABEL_8:
    if ( !v7 )
      v8 = (_BYTE *)v9;
    *v8 = 1;
    if ( v7 )
    {
      tip::details::test_common_data<1>::end_update(v7 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v11);
    }
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v2 = v6;
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v15);
  if ( v6 < 0 )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v11,
      v14);
    v7 = v11;
    tip::details::test_common_data<1>::begin_update(v11 + 8);
    v8 = (_BYTE *)(v7 + 188);
    v9 = 12LL;
    goto LABEL_8;
  }
  if ( v15 > 5 && *((_DWORD *)this + 100) )
    winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InvokeCampaign(this);
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v13);
  return v2;
}

/*
 * XREFs of ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180711B68
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180719C80 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAA_NXZ @ 0x180115CD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@deta.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x180392150 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18071014C (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     ?data@?$consume_Windows_Storage_Streams_IBuffer@UIBuffer@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18071AE68 (-data@-$consume_Windows_Storage_Streams_IBuffer@UIBuffer@Streams@Storage@Windows@winrt@@@impl@wi.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_FileMappingTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_FileMappingTipTest@@@2@XZ @ 0x18071CC68 (-start_and_watch_errors@-$tip_test@U_tip_FileMappingTipTest@@@tip@@QEAA-AV-$test_watcher@U_tip_F.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r15
  std::_Ref_count_base *v7; // rbx
  __int64 v8; // rax
  signed int v9; // eax
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rdx
  unsigned int v12; // r8d
  int CloudPCMode; // eax
  winrt::impl **v14; // rdx
  std::_Ref_count_base *v15; // rbx
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  std::_Ref_count_base *v20; // rbx
  __int64 v21; // rax
  int v22; // esi
  volatile signed __int32 *v23; // rax
  std::_Ref_count_base *v25[2]; // [rsp+20h] [rbp-59h] BYREF
  volatile signed __int32 *v26; // [rsp+40h] [rbp-39h] BYREF
  __int128 v27; // [rsp+48h] [rbp-31h]
  __int16 v28; // [rsp+58h] [rbp-21h]
  _BYTE v29[8]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v30[24]; // [rsp+78h] [rbp-1h] BYREF
  int v31; // [rsp+90h] [rbp+17h]
  __int64 v32; // [rsp+A0h] [rbp+27h] BYREF
  std::_Ref_count_base *v33; // [rsp+A8h] [rbp+2Fh]
  int v34; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v35; // [rsp+F0h] [rbp+77h] BYREF
  volatile signed __int32 *v36; // [rsp+F8h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v28 = -1;
  *(_OWORD *)v25 = 0LL;
  tip::tip_test<_tip_FileMappingTipTest>::start_and_watch_errors(v25, v29);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v25);
  v6 = *a3;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    v25,
    &v32);
  v7 = v25[0];
  tip::details::test_common_data<1>::begin_update((__int64)v25[0] + 8);
  v8 = (__int64)v7 + 184;
  if ( !v7 )
    v8 = 8LL;
  *(_QWORD *)v8 = v6;
  if ( v7 )
  {
    tip::details::test_common_data<1>::end_update((__int64)v7 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(v25);
  }
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
  winrt::hstring::hstring((winrt::hstring *)&v36, L"RemoteSystemProvider");
  Util::FileMappingHelpers::ReadBufferFromSharedMemory(a1 + 136, &v35, v6, &v36);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v36);
  if ( v35 )
  {
    v34 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 56LL))(v35, &v34);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    winrt::impl::consume_Windows_Storage_Streams_IBuffer<winrt::Windows::Storage::Streams::IBuffer>::data(&v35);
    v10 = RemoteSystemData::RemoteSystem::CreateFromBytes((__int64)v25);
    if ( &v26 != (volatile signed __int32 **)v10 )
    {
      v11 = *(volatile signed __int32 **)v10;
      *(_QWORD *)v10 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v26, v11);
    }
    LODWORD(v27) = *(_DWORD *)(v10 + 8);
    *((_QWORD *)&v27 + 1) = *(_QWORD *)(v10 + 16);
    v28 = *(_WORD *)(v10 + 24);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v25);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl) )
      CloudPCMode = *(_DWORD *)(a1 + 44);
    else
      CloudPCMode = CloudPCHelpers::GetCloudPCMode();
    v14 = (winrt::impl **)&v26;
    if ( CloudPCMode == 1 )
      v14 = (winrt::impl **)&c_bootSystemId;
    winrt::hstring::operator=(&v26, v14, v12);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v25,
      &v32);
    v15 = v25[0];
    tip::details::test_common_data<1>::begin_update((__int64)v25[0] + 8);
    v16 = (__int64)v15 + 192;
    if ( !v15 )
      v16 = 16LL;
    *(_BYTE *)v16 = 1;
    if ( v15 )
    {
      tip::details::test_common_data<1>::end_update((__int64)v15 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(v25);
    }
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v25,
      &v32);
    v17 = v25[0];
    tip::details::test_common_data<1>::begin_update((__int64)v25[0] + 8);
    v18 = (__int64)v17 + 200;
    if ( !v17 )
      v18 = 24LL;
    v19 = *((_QWORD *)&v27 + 1);
    *(_QWORD *)v18 = *((_QWORD *)&v27 + 1);
    if ( v17 )
    {
      tip::details::test_common_data<1>::end_update((__int64)v17 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(v25);
    }
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v25,
      &v32);
    v20 = v25[0];
    tip::details::test_common_data<1>::begin_update((__int64)v25[0] + 8);
    v21 = (__int64)v20 + 208;
    if ( !v20 )
      v21 = 32LL;
    v22 = v27;
    *(_DWORD *)v21 = v27;
    if ( v20 )
    {
      tip::details::test_common_data<1>::end_update((__int64)v20 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(v25);
    }
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
  }
  else
  {
    v19 = *((_QWORD *)&v27 + 1);
    v22 = v27;
  }
  tip::details::test_common_data<1>::complete(v32 + 8);
  v23 = v26;
  v26 = 0LL;
  *(_QWORD *)a2 = v23;
  *(_DWORD *)(a2 + 8) = v22;
  *(_QWORD *)(a2 + 16) = v19;
  *(_WORD *)(a2 + 24) = v28;
  if ( v35 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
  if ( v31 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
  return a2;
}

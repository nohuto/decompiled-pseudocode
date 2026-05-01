/*
 * XREFs of _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$62 @ 0x180654BFB
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$capture@UIImmersiveMonitor@@AEAU?$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@1PEAPEAX@Z$$TAEBU6@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitor@@@0@AEAU?$com_ptr@UIImmersiveMonitorManager@@@0@$$QEAP8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@2PEAPEAX@Z$$QEA$$T2@Z @ 0x180652D90 (--$capture@UIImmersiveMonitor@@AEAU-$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMoni.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchEdgeGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchEdgeGestureTest@@@details@tip@@@std@@XZ @ 0x180656004 (-ensure_data@-$tip_test@U_tip_TouchEdgeGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_da.c)
 */

__int64 __fastcall TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch_62(wil *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  void (__fastcall *v9)(__int64, __int64); // r14
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  std::_Ref_count_base *v13; // rcx
  __int64 v14; // rsi
  void (__fastcall *v15)(__int64, __int64); // r14
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rbx
  void (__fastcall *v21)(__int64, __int64); // rsi
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  std::_Ref_count_base *v25; // rcx

  if ( (unsigned int)wil::ResultFromCaughtException(a1) != -2147023728 )
    throw;
  v3 = (_QWORD *)tip::tip_test<_tip_TouchEdgeGestureTest>::ensure_data(a2 + 9);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2 + 6,
    v3);
  v4 = a2[6];
  tip::details::test_common_data<0>::begin_update(v4 + 8);
  if ( v4 )
    v5 = v4 + 176;
  else
    v5 = 0LL;
  *(_BYTE *)(v5 + 24) = 1;
  if ( v4 )
  {
    tip::details::test_common_data<0>::end_update(v4 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a2 + 6);
  }
  v6 = (std::_Ref_count_base *)a2[7];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (_QWORD *)a2[46];
  v8 = *v7;
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v7 + 24LL);
  v10 = (_QWORD *)tip::tip_test<_tip_TouchEdgeGestureTest>::ensure_data(a2 + 9);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2 + 6,
    v10);
  v11 = a2[6];
  tip::details::test_common_data<0>::begin_update(v11 + 8);
  if ( v11 )
    v12 = v11 + 176;
  else
    v12 = 0LL;
  v9(v8, v12 + 28);
  if ( v11 )
  {
    tip::details::test_common_data<0>::end_update(v11 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a2 + 6);
  }
  v13 = (std::_Ref_count_base *)a2[7];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v14 = *v7;
  v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v7 + 32LL);
  v16 = (_QWORD *)tip::tip_test<_tip_TouchEdgeGestureTest>::ensure_data(a2 + 9);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2 + 6,
    v16);
  v17 = a2[6];
  tip::details::test_common_data<0>::begin_update(v17 + 8);
  if ( v17 )
    v18 = v17 + 176;
  else
    v18 = 0LL;
  v15(v14, v18 + 32);
  if ( v17 )
  {
    tip::details::test_common_data<0>::end_update(v17 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a2 + 6);
  }
  v19 = (std::_Ref_count_base *)a2[7];
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  a2[8] = 0LL;
  a2[6] =  IImmersiveMonitorManager::`vcall'{72,{flat}};
  winrt::capture<IImmersiveMonitor,winrt::com_ptr<IImmersiveMonitorManager> &,long (IImmersiveMonitorManager::*)(HMONITOR__ *,_GUID const &,_GUID const &,void * *),std::nullptr_t,_GUID const &>(
    a2 + 49,
    v7,
    (__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, void *, __int64 *))a2 + 6,
    a2 + 8);
  v20 = a2[49];
  v21 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 72LL);
  v22 = (_QWORD *)tip::tip_test<_tip_TouchEdgeGestureTest>::ensure_data(a2 + 9);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a2 + 6,
    v22);
  v23 = a2[6];
  tip::details::test_common_data<0>::begin_update(v23 + 8);
  if ( v23 )
    v24 = v23 + 176;
  else
    v24 = 0LL;
  v21(v20, v24 + 36);
  if ( v23 )
  {
    tip::details::test_common_data<0>::end_update(v23 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a2 + 6);
  }
  v25 = (std::_Ref_count_base *)a2[7];
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete(a2 + 9);
  if ( v20 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a2 + 49);
  return 0LL;
}

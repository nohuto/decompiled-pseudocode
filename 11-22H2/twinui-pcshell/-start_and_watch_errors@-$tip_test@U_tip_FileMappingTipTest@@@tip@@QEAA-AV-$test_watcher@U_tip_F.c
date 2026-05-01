/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_FileMappingTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_FileMappingTipTest@@@2@XZ @ 0x18071CC68
 * Callers:
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180711B68 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180708A98 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@@std@@QEA.c)
 */

__int64 __fastcall tip::tip_test<_tip_FileMappingTipTest>::start_and_watch_errors(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  if ( !*a1 )
  {
    v5 = operator new(0xE8uLL);
    v6 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_FileMappingTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_FileMappingTipTest>>((__int64)v5);
    *a1 = v6 + 16;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  tip::details::test_common_data<1>::start(*a1 + 8, &v9);
  *(_QWORD *)a2 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a2 + 48),
    a1);
  return a2;
}

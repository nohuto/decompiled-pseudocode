/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@2@XZ @ 0x1805BE86C
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801C91E0 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@0@XZ @ 0x1805BC7F8 (--$start_and_watch_errors@V-$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@@tip@@YA-AV-$test_.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppPrelaunchBackgroundTask@@@details@tip@@@std@@QEAA@XZ @ 0x1805BBB70 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_AppPrelaunchBackgroundTask@@@details@tip@@@.c)
 */

__int64 __fastcall tip::tip_test<_tip_AppPrelaunchBackgroundTask>::start_and_watch_errors(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  void *v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( *a1 && tip::details::test_common_data<0>::has_ever_started(v4 + 8) )
  {
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
    v4 = *a1;
  }
  if ( !v4 )
  {
    v5 = operator new(0xB0uLL);
    v6 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunchBackgroundTask>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunchBackgroundTask>>((__int64)v5);
    v4 = v6 + 16;
    *a1 = v6 + 16;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    if ( v7 )
    {
      std::_Ref_count_base::_Decref(v7);
      v4 = *a1;
    }
  }
  tip::details::test_common_data<0>::start(v4 + 8, &v9);
  *(_QWORD *)a2 = &tip::test_watcher<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a2 + 48),
    a1);
  return a2;
}

/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@0@XZ @ 0x18054EBB0
 * Callers:
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180553C94 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x180554324 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumb.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?ensure_data@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@@std@@XZ @ 0x180556914 (-ensure_data@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@AEBAAEAV-$shared_p.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::start_and_watch_errors<tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::ensure_data(v5);
  tip::details::test_common_data<0>::start(*v2 + 8LL, &v6);
  v3 = v5[0] == 0LL;
  *(_QWORD *)a1 = &tip::test_watcher<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    !v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)a1 + 6,
    v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  return a1;
}

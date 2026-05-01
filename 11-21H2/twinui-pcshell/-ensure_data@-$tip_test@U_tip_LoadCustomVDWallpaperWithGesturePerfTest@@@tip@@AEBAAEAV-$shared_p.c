/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@@std@@XZ @ 0x180556914
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@0@XZ @ 0x18054EBB0 (--$start_and_watch_errors@V-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip.c)
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180553C94 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x180554324 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumb.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@@std@@QEAA@XZ @ 0x18054DEEC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 CustomVDWallpaperWithGesturePerf; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    CustomVDWallpaperWithGesturePerf = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest>>((__int64)v2);
    *a1 = CustomVDWallpaperWithGesturePerf + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = CustomVDWallpaperWithGesturePerf;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}

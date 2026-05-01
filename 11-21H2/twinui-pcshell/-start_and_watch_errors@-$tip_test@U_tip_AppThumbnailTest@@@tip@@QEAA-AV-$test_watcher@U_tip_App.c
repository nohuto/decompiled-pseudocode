/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA?AV?$test_watcher@U_tip_AppThumbnailTest@@@2@XZ @ 0x1804979F8
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_AppThumbnailTest@@@0@XZ @ 0x180495A34 (--$start_and_watch_errors@V-$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA-AV-$test_watcher@U_.c)
 * Callees:
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180041254 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@V?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@@0@XZ @ 0x1804958B4 (--$make_shared@V-$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@$$V@std@@YA-AV-$shared_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<_tip_AppThumbnailTest>::start_and_watch_errors(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-20h]
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    if ( tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    {
      *a1 = 0LL;
      v5 = (std::_Ref_count_base *)a1[1];
      a1[1] = 0LL;
      v4 = 0LL;
      if ( v5 )
      {
        std::_Ref_count_base::_Decref(v5);
        v4 = *a1;
      }
    }
  }
  if ( !v4 )
  {
    v6 = std::make_shared<tip::details::test_merged_data<_tip_AppThumbnailTest>,>(&v9);
    std::shared_ptr<KBViewInfo>::operator=(a1, v6);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  tip::details::test_common_data<1>::start(*a1 + 8, &v11);
  *(_QWORD *)a2 = &tip::test_watcher<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v7 = a1[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)(a2 + 48) = *a1;
  *(_QWORD *)(a2 + 56) = a1[1];
  return a2;
}

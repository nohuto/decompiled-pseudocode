/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x1807051C4
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@@Z @ 0x1805FFFF4 (--0-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ?ensure_data@?$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@XZ @ 0x180707DA8 (-ensure_data@-$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::start_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_BootToCloudPCTest>::ensure_data(v4);
  tip::details::test_common_data<1>::start(*v2 + 8LL, &v5);
  tip::test_watcher<_tip_VDSlideAnimationPerfTest>::test_watcher<_tip_VDSlideAnimationPerfTest>(a1, v4);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  return a1;
}

/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_EnableCloudPCTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_EnableCloudPCTipTest@@@2@XZ @ 0x180708648
 * Callers:
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_EnableCloudPCTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180701DCC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_EnableCloudPCTipTest@@@details@tip@@@std@@Q.c)
 */

__int64 __fastcall tip::tip_test<_tip_EnableCloudPCTipTest>::start_and_watch_errors(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  _QWORD *v6; // rdi
  void *v7; // rax
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 )
  {
    if ( tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    {
      *a1 = 0LL;
      v5 = (std::_Ref_count_base *)a1[1];
      a1[1] = 0LL;
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
    }
  }
  if ( *a1 )
  {
    v6 = a1 + 1;
  }
  else
  {
    v7 = operator new(0xC8uLL);
    v8 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_EnableCloudPCTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_EnableCloudPCTipTest>>((__int64)v7);
    *a1 = v8 + 16;
    v6 = a1 + 1;
    v9 = (std::_Ref_count_base *)a1[1];
    a1[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  tip::details::test_common_data<1>::start(*a1 + 8, &v11);
  *(_QWORD *)a2 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *v6 )
    _InterlockedIncrement((volatile signed __int32 *)(*v6 + 8LL));
  *(_QWORD *)(a2 + 48) = *a1;
  *(_QWORD *)(a2 + 56) = *v6;
  return a2;
}

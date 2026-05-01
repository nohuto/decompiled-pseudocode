/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_DashboardExtensionCall@@@tip@@QEAA?AV?$test_watcher@U_tip_DashboardExtensionCall@@@2@XZ @ 0x180169630
 * Callers:
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@XZ @ 0x18011E834 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_DashboardExtensionCall@@@details@tip@@@std@@QEAA@XZ @ 0x1801696EC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_DashboardExtensionCall@@@details@tip@@@std@.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<_tip_DashboardExtensionCall>::start_and_watch_errors(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  void *v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rax
  std::_Ref_count_base *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int8)tip::details::test_common_data<0>::has_ever_started(v4 + 8) )
    {
      *a1 = 0LL;
      v10 = (std::_Ref_count_base *)a1[1];
      a1[1] = 0LL;
      v4 = 0LL;
      if ( v10 )
      {
        std::_Ref_count_base::_Decref(v10);
        v4 = *a1;
      }
    }
  }
  if ( !v4 )
  {
    v5 = operator new(0xB0uLL);
    v6 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_DashboardExtensionCall>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_DashboardExtensionCall>>(v5);
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
  tip::details::test_common_data<0>::start(v4 + 8, &v11);
  *(_QWORD *)a2 = &tip::test_watcher<_tip_WinXMenuEnumerationTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v8 = a1[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *(_QWORD *)(a2 + 48) = *a1;
  *(_QWORD *)(a2 + 56) = a1[1];
  return a2;
}

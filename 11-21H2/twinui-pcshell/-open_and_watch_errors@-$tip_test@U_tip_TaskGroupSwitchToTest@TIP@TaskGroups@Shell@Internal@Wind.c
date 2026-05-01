/*
 * XREFs of ?open_and_watch_errors@?$tip_test@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tip@@QEAA?AV?$test_watcher@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18058BE90
 * Callers:
 *     ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180589444 (-ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@@std@@QEAA@XZ @ 0x180587DEC (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@.c)
 *     ??0?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180588E30 (--0-$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::open_and_watch_errors(
        _QWORD *a1,
        __int64 a2)
{
  std::_Ref_count_base *v4; // rdi
  void *v5; // rax
  std::_Ref_count_base *v6; // rax
  __int64 v7; // rax
  _DWORD *v9; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-10h]

  v4 = (std::_Ref_count_base *)operator new(0xC8uLL);
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::`vftable';
  tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>(
    (__int64)v4 + 16,
    0LL,
    0LL);
  v9 = (_DWORD *)((char *)v4 + 16);
  v10 = v4;
  std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)&v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( !*a1 )
  {
    v5 = operator new(0xC8uLL);
    v6 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::_Ref_count_obj2<tip::details::test_merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>((__int64)v5);
    v11 = (__int64)v6 + 16;
    v12 = v6;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v11);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  *(_QWORD *)a2 = &tip::test_watcher<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v7 = a1[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)(a2 + 48) = *a1;
  *(_QWORD *)(a2 + 56) = a1[1];
  return a2;
}

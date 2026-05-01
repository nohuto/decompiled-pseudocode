/*
 * XREFs of ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180589444
 * Callers:
 *     ?ActivateWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@I@Z @ 0x1805893D0 (-ActivateWindows@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTaskGroup@TaskGroups@Shell@Internal@Windows@3@AEBUWindowId@WindowManagement@ApplicationModel@783@@Z @ 0x18045562C (-TryFindGroupWithWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGr.c)
 *     ??$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@@Z @ 0x18058832C (--$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUguid@3@XZ @ 0x180589FCC (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tip@@QEAA?AV?$test_watcher@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18058BE90 (-open_and_watch_errors@-$tip_test@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::ActivateWindows(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v4; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // r8
  __int128 *v11; // rax
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v13[2]; // [rsp+48h] [rbp-41h] BYREF
  char v14[8]; // [rsp+60h] [rbp-29h] BYREF
  char v15[24]; // [rsp+68h] [rbp-21h] BYREF
  int v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+90h] [rbp+7h]
  std::_Ref_count_base *v18; // [rsp+98h] [rbp+Fh]
  char v19[16]; // [rsp+A0h] [rbp+17h] BYREF

  *(_OWORD *)v13 = 0LL;
  tip::tip_test<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::open_and_watch_errors(
    v13,
    v14);
  v4 = *a2;
  v5 = *a2;
  v6 = (__int64)&(*a2)[*((unsigned int *)a2 + 2)];
  if ( *a2 != (unsigned int *)v6 )
  {
    v7 = *v4;
    do
    {
      v8 = *v5;
      v9 = 16;
      if ( v7 != v8 )
        v9 = 1;
      v10 = 0LL;
      if ( v7 != v8 )
        v10 = v7;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, int, int))(**(_QWORD **)(a1 + 176) + 24LL))(
        *(_QWORD *)(a1 + 176),
        v8,
        v10,
        0LL,
        3,
        v9,
        2);
      ++v5;
    }
    while ( v5 != (unsigned int *)v6 );
  }
  tip::details::test_common_data<1>::complete(v17 + 8);
  if ( *(_QWORD *)(a1 + 456) )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
      (__int64 *)(a1 + 456),
      &v12,
      v4);
    v11 = (__int128 *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                        &v12,
                        v19);
    TaskGroupsTraceLoggingProvider::TaskGroupSwitchToCompleted<winrt::guid>(v11);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
}

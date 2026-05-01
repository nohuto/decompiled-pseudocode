/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@2@XZ @ 0x18011F83C
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1800F5F9C (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??$make_shared@V?$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@@0@XZ @ 0x180122AF0 (--$make_shared@V-$test_merged_data@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@details@tip@@.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::start_and_watch_errors(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rax
  std::_Ref_count_base *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int8)tip::details::test_common_data<0>::has_ever_started(v4 + 8) )
    {
      *a1 = 0LL;
      v11 = (std::_Ref_count_base *)a1[1];
      a1[1] = 0LL;
      v4 = 0LL;
      if ( v11 )
      {
        std::_Ref_count_base::_Decref(v11);
        v4 = *a1;
      }
    }
  }
  if ( !v4 )
  {
    v5 = (__int64 *)std::make_shared<tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest>,>(v12);
    v6 = *v5;
    v7 = v5[1];
    *v5 = 0LL;
    v5[1] = 0LL;
    *a1 = v6;
    v8 = (std::_Ref_count_base *)a1[1];
    a1[1] = v7;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  tip::details::test_common_data<0>::start(*a1 + 8, v14);
  *(_QWORD *)a2 = &tip::test_watcher<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  v9 = a1[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *(_QWORD *)(a2 + 48) = *a1;
  *(_QWORD *)(a2 + 56) = a1[1];
  return a2;
}

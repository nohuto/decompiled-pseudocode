/*
 * XREFs of ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805BCDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180030A3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180030A6C (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC138 (--$open_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_tip.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char v2; // di
  std::_Ref_count_base *v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  std::_Ref_count_base *v6; // rbx
  __int64 v7; // rax
  char v8; // r14
  __int64 result; // rax
  std::_Ref_count_base *v10; // kr00_8
  std::_Ref_count_base *v11; // rbx
  char *v12; // rax
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-1E8h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-1E0h] BYREF
  int v16; // [rsp+50h] [rbp-1C8h]
  __int64 v17; // [rsp+60h] [rbp-1B8h] BYREF
  std::_Ref_count_base *v18; // [rsp+68h] [rbp-1B0h]
  _BYTE v19[8]; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+78h] [rbp-1A0h] BYREF
  __int128 v21; // [rsp+80h] [rbp-198h]
  __int64 (__fastcall ***v22)(); // [rsp+E0h] [rbp-138h]
  _BYTE v23[8]; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD v24[15]; // [rsp+F8h] [rbp-120h] BYREF
  _BYTE v25[8]; // [rsp+170h] [rbp-A8h] BYREF
  _QWORD v26[15]; // [rsp+178h] [rbp-A0h] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((__int64)v14);
  v13[0] = 0LL;
  v2 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 15, v13);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v13,
    &v17);
  v3 = v13[0];
  tip::details::test_common_data<1>::begin_update((__int64)v13[0] + 8);
  v4 = (__int64)v3 + 155;
  if ( !v3 )
    v4 = 11LL;
  *(_BYTE *)v4 = v2;
  if ( v3 )
  {
    tip::details::test_common_data<1>::end_update((__int64)v3 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(v13);
  }
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  v5 = -2147483638;
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v13,
    &v17);
  v6 = v13[0];
  tip::details::test_common_data<1>::begin_update((__int64)v13[0] + 8);
  v7 = (__int64)v6 + 155;
  if ( !v6 )
    v7 = 11LL;
  v8 = *(_BYTE *)v7;
  if ( v6 )
  {
    tip::details::test_common_data<1>::end_update((__int64)v6 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(v13);
  }
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  if ( !v8 )
  {
    v24[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v24[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v24[13] = v24;
    v26[0] = off_180645980;
    v26[13] = v26;
    v13[0] = (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this - 8);
    v13[1] = (std::_Ref_count_base *)v14;
    v20 = off_180645908;
    v21 = *(_OWORD *)v13;
    v22 = &v20;
    v5 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v19,
           (__int64)v25,
           (__int64)v23);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v19);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v25);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v23);
  }
  tip::details::test_common_data<1>::complete(v17 + 8);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  result = v5;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v10 = v6;
      tip::open_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((__int64)v14);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v13,
        &v17);
      v11 = v13[0];
      tip::details::test_common_data<1>::begin_update((__int64)v13[0] + 8);
      if ( v11 )
        v12 = (char *)v11 + 144;
      else
        v12 = 0LL;
      v12[15] = 1;
      if ( v11 )
      {
        tip::details::test_common_data<1>::end_update((__int64)v11 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v13);
      }
      if ( v13[1] )
        std::_Ref_count_base::_Decref(v13[1]);
      tip::details::test_common_data<1>::complete(v17 + 8);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      if ( v16 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
      v6 = v10;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}

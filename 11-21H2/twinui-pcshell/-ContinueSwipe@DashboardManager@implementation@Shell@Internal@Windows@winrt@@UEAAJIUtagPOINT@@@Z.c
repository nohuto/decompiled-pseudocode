/*
 * XREFs of ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805BD3E0
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
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC138 (--$open_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_tip.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  char v4; // di
  std::_Ref_count_base *v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // esi
  std::_Ref_count_base *v8; // rbx
  __int64 v9; // rax
  char v10; // r14
  __int64 result; // rax
  std::_Ref_count_base *v12; // kr00_8
  std::_Ref_count_base *v13; // rbx
  char *v14; // rax
  std::_Ref_count_base *v15[2]; // [rsp+20h] [rbp-208h] BYREF
  struct tagPOINT v16; // [rsp+30h] [rbp-1F8h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-1E8h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-1E0h] BYREF
  int v19; // [rsp+60h] [rbp-1C8h]
  __int64 v20; // [rsp+70h] [rbp-1B8h] BYREF
  std::_Ref_count_base *v21; // [rsp+78h] [rbp-1B0h]
  _BYTE v22[8]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+88h] [rbp-1A0h] BYREF
  __int128 v24; // [rsp+90h] [rbp-198h]
  __int64 (__fastcall ***v25)(); // [rsp+F0h] [rbp-138h]
  _BYTE v26[8]; // [rsp+100h] [rbp-128h] BYREF
  _QWORD v27[15]; // [rsp+108h] [rbp-120h] BYREF
  _BYTE v28[8]; // [rsp+180h] [rbp-A8h] BYREF
  _QWORD v29[15]; // [rsp+188h] [rbp-A0h] BYREF

  v16 = a3;
  tip::open_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((__int64)v17);
  v15[0] = 0LL;
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 15, v15);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v15,
    &v20);
  v5 = v15[0];
  tip::details::test_common_data<1>::begin_update((__int64)v15[0] + 8);
  v6 = (__int64)v5 + 155;
  if ( !v5 )
    v6 = 11LL;
  *(_BYTE *)v6 = v4;
  if ( v5 )
  {
    tip::details::test_common_data<1>::end_update((__int64)v5 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(v15);
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  v7 = -2147483638;
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v15,
    &v20);
  v8 = v15[0];
  tip::details::test_common_data<1>::begin_update((__int64)v15[0] + 8);
  v9 = (__int64)v8 + 155;
  if ( !v8 )
    v9 = 11LL;
  v10 = *(_BYTE *)v9;
  if ( v8 )
  {
    tip::details::test_common_data<1>::end_update((__int64)v8 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(v15);
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  if ( !v10 )
  {
    v27[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v27[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v27[13] = v27;
    v29[0] = off_180645980;
    v29[13] = v29;
    v15[0] = (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)this - 8);
    v15[1] = (std::_Ref_count_base *)&v16;
    v23 = off_180645958;
    v24 = *(_OWORD *)v15;
    v25 = &v23;
    v7 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v22,
           (__int64)v28,
           (__int64)v26);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v22);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v28);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v26);
  }
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  result = v7;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v12 = v8;
      tip::open_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((__int64)v17);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v15,
        &v20);
      v13 = v15[0];
      tip::details::test_common_data<1>::begin_update((__int64)v15[0] + 8);
      if ( v13 )
        v14 = (char *)v13 + 144;
      else
        v14 = 0LL;
      v14[13] = 1;
      if ( v13 )
      {
        tip::details::test_common_data<1>::end_update((__int64)v13 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v15);
      }
      if ( v15[1] )
        std::_Ref_count_base::_Decref(v15[1]);
      tip::details::test_common_data<1>::complete(v20 + 8);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      if ( v19 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
      v8 = v12;
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}

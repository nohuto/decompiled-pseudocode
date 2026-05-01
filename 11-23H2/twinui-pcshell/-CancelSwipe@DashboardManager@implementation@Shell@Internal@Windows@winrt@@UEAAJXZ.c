/*
 * XREFs of ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1806955F0
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180187750 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180187780 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$test_watcher@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18021E658 (-complete@-$test_watcher@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEA.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_5f2a6c8ab12a39d6e57c75a98da72756__void_ @ 0x18022E8E4 (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_5f2a6c8ab12a39d6e57c75.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180230B6C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235824 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235954 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@1@XZ @ 0x180235CCC (--C-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA-.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  char v2; // bl
  unsigned int v3; // esi
  char v4; // bl
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v7; // [rsp+30h] [rbp-1D8h] BYREF
  _BYTE v8[56]; // [rsp+38h] [rbp-1D0h] BYREF
  _BYTE v9[8]; // [rsp+70h] [rbp-198h] BYREF
  _QWORD v10[15]; // [rsp+78h] [rbp-190h] BYREF
  _BYTE v11[8]; // [rsp+F0h] [rbp-118h] BYREF
  _QWORD v12[15]; // [rsp+F8h] [rbp-110h] BYREF
  _BYTE v13[128]; // [rsp+170h] [rbp-98h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v8);
  v7 = 0LL;
  v2 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v7);
  *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                (__int64)v8,
                &v6)
           + 267LL) = v2;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v6);
  v3 = -2147483638;
  v4 = *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                     (__int64)v8,
                     &v6)
                + 267LL);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v6);
  if ( v4 )
  {
    *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                  (__int64)v8,
                  &v6)
             + 271LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v6);
  }
  else
  {
    v10[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v10[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v10[13] = v10;
    v12[0] = off_1807C9908;
    v12[13] = v12;
    *(_QWORD *)&v6 = (char *)this - 8;
    *((_QWORD *)&v6 + 1) = v8;
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_5f2a6c8ab12a39d6e57c75a98da72756__void_(
      (__int64)v13,
      &v6);
    v3 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v13,
           (__int64)v11,
           (__int64)v9);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v13);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v11);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v9);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::complete((__int64)v8);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v8);
  result = v3;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v8);
      *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                    (__int64)v8,
                    &v6)
               + 271LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)&v6);
      tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::complete((__int64)v8);
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v8);
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}

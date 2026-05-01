/*
 * XREFs of ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695B50
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180187750 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180187780 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$test_watcher@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18021E658 (-complete@-$test_watcher@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEA.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_6a1e3fb38acb35ade5242a31e2c51efd__void_ @ 0x18022E90C (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_6a1e3fb38acb35ade5242a.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180230B6C (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235824 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235954 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@1@XZ @ 0x180235CCC (--C-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA-.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  char v4; // bl
  unsigned int v5; // edi
  char v6; // bl
  __int64 result; // rax
  void *v8; // [rsp+20h] [rbp-208h] BYREF
  __int64 v9; // [rsp+28h] [rbp-200h] BYREF
  struct tagPOINT v10; // [rsp+30h] [rbp-1F8h] BYREF
  _BYTE v11[56]; // [rsp+38h] [rbp-1F0h] BYREF
  _QWORD v12[4]; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v13[8]; // [rsp+90h] [rbp-198h] BYREF
  _QWORD v14[15]; // [rsp+98h] [rbp-190h] BYREF
  _BYTE v15[8]; // [rsp+110h] [rbp-118h] BYREF
  _QWORD v16[15]; // [rsp+118h] [rbp-110h] BYREF
  _BYTE v17[128]; // [rsp+190h] [rbp-98h] BYREF

  v10 = a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v11);
  v9 = 0LL;
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 18, &v9);
  *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                (__int64)v11,
                &v8)
           + 267LL) = v4;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v8);
  v5 = -2147483638;
  v6 = *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                     (__int64)v11,
                     &v8)
                + 267LL);
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v8);
  if ( v6 )
  {
    *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                  (__int64)v11,
                  &v8)
             + 269LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v8);
    tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::complete((__int64)v11);
  }
  else
  {
    v14[0] = ___7____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__6B_;
    v14[1] = Windows::Internal::Shell::IsRpcDisconnectOrCancelError;
    v14[13] = v14;
    v16[0] = off_1807C9908;
    v16[13] = v16;
    v12[0] = (char *)this - 8;
    v12[1] = &v10;
    v12[2] = v11;
    wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_6a1e3fb38acb35ade5242a31e2c51efd__void_(
      (__int64)v17,
      (__int64)v12);
    v5 = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
           0x1F4u,
           (__int64)v17,
           (__int64)v15,
           (__int64)v13);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v17);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v15);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v13);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v11);
  result = v5;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)v11);
      *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::operator->(
                    (__int64)v11,
                    &v8)
               + 269LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v8);
      tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::complete((__int64)v11);
      tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((__int64)v11);
      result = 2147500037LL;
      continue;
    }
    break;
  }
  return result;
}

/*
 * XREFs of ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18003091C
 * Callers:
 *     ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180030878 (-TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1801C6200 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1801C93E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x1801C9B20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1 @ 0x1801CAA10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x1801CAF20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1801CBB10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1801CBB10.c)
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805BDCA0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180030A3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180030A6C (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     wistd::function_long___cdecl(void)_::function_long___cdecl(void)___lambda_d9ee850dfd4f14a339c5644d7c64dad2__void_ @ 0x1801C15D4 (wistd--function_long___cdecl(void)_--function_long___cdecl(void)___lambda_d9ee850dfd4f14a339c564.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
        __int64 a1,
        __int64 a2)
{
  __int128 v2; // xmm0
  DWORD v3; // r10d
  __int64 result; // rax
  unsigned int v5[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v6; // [rsp+30h] [rbp-D0h] BYREF
  char **v7; // [rsp+40h] [rbp-C0h]
  _BYTE v8[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+58h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+60h] [rbp-A0h]
  char **v11; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall ***v12)(); // [rsp+C0h] [rbp-40h]
  _BYTE v13[8]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v14[15]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v15[128]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  *(_QWORD *)&v6 = a1;
  v14[0] = &wistd::__function::__func<bool (*)(long),bool (long)>::`vftable';
  *((_QWORD *)&v6 + 1) = a2;
  v2 = v6;
  v14[1] = anonymous_namespace_::IsRetriableRpcError;
  v14[13] = v14;
  v9 = off_180645898;
  v12 = &v9;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = a2;
  v7 = (char **)v5;
  v10 = v2;
  v11 = (char **)v5;
  wistd::function_long___cdecl_void__::function_long___cdecl_void____lambda_d9ee850dfd4f14a339c5644d7c64dad2__void_(
    v15,
    &v6);
  v5[0] = Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(v3);
  wistd::function<bool (long)>::~function<bool (long)>(v15);
  wistd::function<bool (long)>::~function<bool (long)>(v8);
  wistd::function<bool (long)>::~function<bool (long)>(v13);
  result = v5[0];
  if ( (v5[0] & 0x80000000) != 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x597,
      (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)v5[0],
      v5[0]);
    return v5[0];
  }
  return result;
}

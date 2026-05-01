/*
 * XREFs of ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805BDCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18003091C (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_50eab521f3249b7fa1c207805ae80cf1__0_ @ 0x1801C1354 (std--function_void___cdecl(winrt--WindowsUdk--UI--Shell--Dashboard--DashboardExtens_ea_1801C1354.c)
 *     ?TryUpdatePrelaunchSettingsAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801CC5E8 (-TryUpdatePrelaunchSettingsAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  char *v3; // rdi
  int v4; // eax
  int v5; // ebx
  _BYTE *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v13[10]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v14; // [rsp+70h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = (char *)this - 8;
  *(_QWORD *)&v11 = (char *)this - 8;
  *((struct tagPOINT *)&v11 + 1) = a3;
  std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_50eab521f3249b7fa1c207805ae80cf1__0_(
    (__int64)v12,
    &v11);
  v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
         (__int64)v3,
         (__int64)v12);
  v5 = v4;
  if ( v15 )
  {
    v6 = v12;
    LOBYTE(v6) = v15 != (std::_Ref_count_base *)v12;
    (*(void (__fastcall **)(std::_Ref_count_base *, _BYTE *))(*(_QWORD *)v15 + 32LL))(v15, v6);
  }
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F5,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v5);
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync((__int64)v3, v10);
    result = (unsigned int)v5;
  }
  catch ( ... )
  {
    tip::start_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((struct wil::details::IFailureCallback *)v12);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v11,
      &v14);
    v8 = v11;
    tip::details::test_common_data<1>::begin_update(v11 + 8);
    if ( v8 )
      v9 = v8 + 144;
    else
      v9 = 0LL;
    *(_BYTE *)(v9 + 12) = 1;
    if ( v8 )
    {
      tip::details::test_common_data<1>::end_update(v8 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v11);
    }
    if ( *((_QWORD *)&v11 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v11 + 1));
    tip::details::test_common_data<1>::complete(v14 + 8);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    if ( v13[6] )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    return 2147500037LL;
  }
  return result;
}

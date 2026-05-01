/*
 * XREFs of CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1801DA2F0
 * Callers:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x1801DA238 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1801C2304 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1801C2304.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@W4TaskbarSettingChangedEvent@Dashboard@5UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1801CF40C (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboar_ea_1801CF40C.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x18031996C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(_DWORD *a1)
{
  __int64 v2; // rcx
  CLauncherTipContextMenu *v3; // rcx
  int v4; // eax
  __int16 v5; // ax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *((_WORD *)a1 + 4) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_12;
    case 2:
      a1[4] = 0;
      if ( SHRegGetDWORD(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WinXMigrationLevel",
             a1 + 4) )
      {
        a1[4] = 0;
      }
      if ( a1[4] )
        goto LABEL_11;
      *((_BYTE *)a1 + 20) = 0;
      *((_QWORD *)a1 + 3) = a1 + 5;
      if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready() )
      {
LABEL_7:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        if ( !a1[4] )
        {
          v4 = CLauncherTipContextMenu::CleanupObsoleteLinks(v3);
          a1[16] = v4;
          a1[10] = v4;
          *((_QWORD *)a1 + 6) = retaddr;
          if ( v4 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1C4,
              (__int64)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
              (const char *)(unsigned int)v4);
        }
        SHRegSetDWORD(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
          L"WinXMigrationLevel",
          1u);
LABEL_11:
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *,enum winrt::WindowsUdk::UI::Shell::Dashboard::TaskbarSettingChangedEvent>::promise_type::final_suspend(
          (__int64)a1,
          (_BYTE *)a1 + 32);
LABEL_12:
        *((_QWORD *)a1 + 14) = (char *)a1 + 10;
        v5 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 64) = v5;
        if ( v5 )
        {
          *((_QWORD *)a1 + 18) = 217LL;
          *((_QWORD *)a1 + 12) = 217LL;
          *((_QWORD *)a1 + 10) = a1;
          *((_QWORD *)a1 + 24) = (char *)a1 + 10;
          operator delete(a1);
        }
      }
      else
      {
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(
          v2,
          a1);
      }
      return;
    case 4:
      goto LABEL_7;
    default:
      __debugbreak();
      return;
  }
}

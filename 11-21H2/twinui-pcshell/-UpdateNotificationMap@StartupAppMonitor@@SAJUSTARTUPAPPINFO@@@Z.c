/*
 * XREFs of ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1805817BC
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x180584FA0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1805855A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180239440 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18057E0D4 (--$_Insert_or_assign@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPIN.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartupAppMonitor::UpdateNotificationMap(STARTUPAPPINFO *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  void *v4; // rdx
  const char *v5; // r9
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-58h]
  _BYTE v8[16]; // [rsp+28h] [rbp-50h] BYREF
  STARTUPAPPINFO *v9; // [rsp+38h] [rbp-40h]
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = a1;
  v2 = _Mtx_lock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
  try
  {
    if ( v2 )
      std::_Throw_C_error(v2);
    std::wstring::wstring((__int64)v10, (__int64)a1 + 40);
    std::map<std::wstring,STARTUPAPPINFO>::_Insert_or_assign<std::wstring,STARTUPAPPINFO>(
      v3,
      (__int64)v8,
      v10,
      (__int64)a1);
    wil::details::SetEvent(StartupAppMonitor::s_showNotificationMapUpdateEvent, v4);
    std::wstring::_Tidy_deallocate((__int64)v10);
    _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
    STARTUPAPPINFO::~STARTUPAPPINFO(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    v7 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x150,
           (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
           v5);
    STARTUPAPPINFO::~STARTUPAPPINFO(v9);
    return v7;
  }
  return result;
}

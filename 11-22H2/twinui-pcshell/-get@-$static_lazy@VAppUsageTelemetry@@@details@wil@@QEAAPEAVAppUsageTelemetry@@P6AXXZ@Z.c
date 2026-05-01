/*
 * XREFs of ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0
 * Callers:
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1801992A0 (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     ?FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ @ 0x180199338 (-FamilyAppUsageManagerStarted@AppUsageTelemetry@@SAXXZ.c)
 *     ??$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z @ 0x18061B1A4 (--$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18061D030 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18061D310 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x18061FE40 (-ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N.c)
 *     ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1806201F0 (-StartUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180621BD8 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x1806241CC (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x180624218 (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180625E68 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x18062608C (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x180626360 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 *     ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180626450 (-TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@W.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806266F8 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     ?TerminateApp@@YAXIPEBG@Z @ 0x180627724 (-TerminateApp@@YAXIPEBG@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AppUsageTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`AppUsageTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`AppUsageTelemetry::Instance'::`2'::wrapper;
    v9 = &qword_18098EAE8;
    qword_18098EAE8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098EB00 = (__int64)&`AppUsageTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}

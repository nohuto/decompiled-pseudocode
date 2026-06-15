/*
 * XREFs of ?KsNotifications_ServiceStop@@YAXXZ @ 0x180132E18
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0560 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180002E20 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void KsNotifications_ServiceStop(void)
{
  void *v0; // rcx
  _QWORD *v1; // rax
  CKsNotificationsMonitor *v2; // rbx

  while ( 1 )
  {
    v0 = g_lstKsNotificationMonitors;
    if ( !g_lstKsNotificationMonitors )
      break;
    v1 = *(_QWORD **)g_lstKsNotificationMonitors;
    v2 = (CKsNotificationsMonitor *)*((_QWORD *)g_lstKsNotificationMonitors + 2);
    g_lstKsNotificationMonitors = v1;
    if ( v1 )
      v1[1] = 0LL;
    else
      qword_1801CFEB8 = 0LL;
    operator delete(v0);
    --dword_1801CFEC0;
    CKsNotificationsMonitor::Dispose(v2);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
}

/*
 * XREFs of ?KsNotifications_ServiceStop@@YAXXZ @ 0x18012525C
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C54A0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180124FC8 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
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
      qword_1801C2D78 = 0LL;
    operator delete(v0);
    --dword_1801C2D80;
    CKsNotificationsMonitor::Dispose(v2);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( g_bKsNotificationLockInitialized )
    DeleteCriticalSection(&g_csKsNotificationMonitors);
}

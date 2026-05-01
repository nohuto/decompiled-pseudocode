/*
 * XREFs of ?MonitorAdded@CMonitorNotificationHelper@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802CF950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorNotificationHelper::MonitorAdded(
        CMonitorNotificationHelper *this,
        struct IImmersiveMonitor *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           a2);
}

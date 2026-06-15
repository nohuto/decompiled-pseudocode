/*
 * XREFs of ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180002E20
 * Callers:
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180002C9C (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 *     ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x180002DD0 (--_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180132DB0 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x180132E18 (-KsNotifications_ServiceStop@@YAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CKsNotificationsMonitor::Dispose(CKsNotificationsMonitor *this)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD, CKsNotificationsMonitor *))(**((_QWORD **)this + 4) + 120LL))(
      *((_QWORD *)this + 4),
      this);
    *((_DWORD *)this + 3) = 0;
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}

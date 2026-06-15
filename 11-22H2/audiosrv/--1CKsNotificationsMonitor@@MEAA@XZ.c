/*
 * XREFs of ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180132DB0
 * Callers:
 *     ??_ECKsNotificationsMonitor@@MEAAPEAXI@Z @ 0x180132DE0 (--_ECKsNotificationsMonitor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180002E20 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 */

void __fastcall CKsNotificationsMonitor::~CKsNotificationsMonitor(CKsNotificationsMonitor *this)
{
  *(_QWORD *)this = &CKsNotificationsMonitor::`vftable';
  CKsNotificationsMonitor::Dispose(this);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 4);
}

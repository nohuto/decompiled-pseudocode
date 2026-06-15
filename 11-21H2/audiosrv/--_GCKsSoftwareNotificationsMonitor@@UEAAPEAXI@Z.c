/*
 * XREFs of ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x1800F53C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180124F58 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 */

CKsSoftwareNotificationsMonitor *__fastcall CKsSoftwareNotificationsMonitor::`scalar deleting destructor'(
        CKsSoftwareNotificationsMonitor *this,
        char a2)
{
  CKsNotificationsMonitor::~CKsNotificationsMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

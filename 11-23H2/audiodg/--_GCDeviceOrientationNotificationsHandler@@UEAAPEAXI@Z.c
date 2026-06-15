/*
 * XREFs of ??_GCDeviceOrientationNotificationsHandler@@UEAAPEAXI@Z @ 0x14006BF30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CDeviceOrientationNotificationsHandler@@UEAA@XZ @ 0x14006BD38 (--1CDeviceOrientationNotificationsHandler@@UEAA@XZ.c)
 */

CDeviceOrientationNotificationsHandler *__fastcall CDeviceOrientationNotificationsHandler::`scalar deleting destructor'(
        CDeviceOrientationNotificationsHandler *this,
        char a2)
{
  CDeviceOrientationNotificationsHandler::~CDeviceOrientationNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

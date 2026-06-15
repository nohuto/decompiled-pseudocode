/*
 * XREFs of ??_GCMicBoostNotificationsHandler@@UEAAPEAXI@Z @ 0x14006BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CMicBoostNotificationsHandler@@UEAA@XZ @ 0x140077F20 (--1CMicBoostNotificationsHandler@@UEAA@XZ.c)
 */

CMicBoostNotificationsHandler *__fastcall CMicBoostNotificationsHandler::`scalar deleting destructor'(
        CMicBoostNotificationsHandler *this,
        char a2)
{
  CMicBoostNotificationsHandler::~CMicBoostNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z @ 0x14006BE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x140071600 (--1CAPOEndpointNotificationsHandler@@UEAA@XZ.c)
 */

CAPOEndpointNotificationsHandler *__fastcall CAPOEndpointNotificationsHandler::`scalar deleting destructor'(
        CAPOEndpointNotificationsHandler *this,
        char a2)
{
  CAPOEndpointNotificationsHandler::~CAPOEndpointNotificationsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

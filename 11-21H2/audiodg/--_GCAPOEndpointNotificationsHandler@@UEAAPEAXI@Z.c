/*
 * XREFs of ??_GCAPOEndpointNotificationsHandler@@UEAAPEAXI@Z @ 0x1400650C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOEndpointNotificationsHandler@@UEAA@XZ @ 0x140069364 (--1CAPOEndpointNotificationsHandler@@UEAA@XZ.c)
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

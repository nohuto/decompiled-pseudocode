/*
 * XREFs of ??_GCEndpointNotificationDelegator@@UEAAPEAXI@Z @ 0x180105460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CEndpointNotificationDelegator@@UEAA@XZ @ 0x1801048F4 (--1CEndpointNotificationDelegator@@UEAA@XZ.c)
 */

CEndpointNotificationDelegator *__fastcall CEndpointNotificationDelegator::`scalar deleting destructor'(
        CEndpointNotificationDelegator *this,
        char a2)
{
  CEndpointNotificationDelegator::~CEndpointNotificationDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

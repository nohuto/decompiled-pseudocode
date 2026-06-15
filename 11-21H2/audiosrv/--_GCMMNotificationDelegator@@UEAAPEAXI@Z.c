/*
 * XREFs of ??_GCMMNotificationDelegator@@UEAAPEAXI@Z @ 0x180105340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CMMNotificationDelegator@@UEAA@XZ @ 0x1801051FC (--1CMMNotificationDelegator@@UEAA@XZ.c)
 */

CMMNotificationDelegator *__fastcall CMMNotificationDelegator::`scalar deleting destructor'(
        CMMNotificationDelegator *this,
        char a2)
{
  CMMNotificationDelegator::~CMMNotificationDelegator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

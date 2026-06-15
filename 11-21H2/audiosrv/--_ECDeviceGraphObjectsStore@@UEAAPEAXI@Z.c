/*
 * XREFs of ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1801133A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1801131D8 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 */

CDeviceGraphObjectsStore *__fastcall CDeviceGraphObjectsStore::`vector deleting destructor'(
        CDeviceGraphObjectsStore *this,
        char a2)
{
  CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??_EDockDevice@@UEAAPEAXI@Z @ 0x1800F47A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1HIDDevice@@UEAA@XZ @ 0x1800F474C (--1HIDDevice@@UEAA@XZ.c)
 */

DockDevice *__fastcall DockDevice::`vector deleting destructor'(DockDevice *this, char a2)
{
  HIDDevice::~HIDDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

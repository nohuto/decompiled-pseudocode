/*
 * XREFs of ??_GPenDevice@@UEAAPEAXI@Z @ 0x180189A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1PenDevice@@UEAA@XZ @ 0x180189954 (--1PenDevice@@UEAA@XZ.c)
 */

PenDevice *__fastcall PenDevice::`scalar deleting destructor'(PenDevice *this, char a2)
{
  PenDevice::~PenDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

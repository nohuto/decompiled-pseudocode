/*
 * XREFs of ??_GRIMDevice@@UEAAPEAXI@Z @ 0x1800F4710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1RIMDevice@@UEAA@XZ @ 0x1800F46C0 (--1RIMDevice@@UEAA@XZ.c)
 */

RIMDevice *__fastcall RIMDevice::`scalar deleting destructor'(RIMDevice *this, char a2)
{
  RIMDevice::~RIMDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

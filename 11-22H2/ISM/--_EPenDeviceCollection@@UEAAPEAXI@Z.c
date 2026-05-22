/*
 * XREFs of ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800F3920
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800F3E00 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

PenDeviceCollection *__fastcall PenDeviceCollection::`vector deleting destructor'(PenDeviceCollection *this, char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PenDeviceCollection::`vftable';
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

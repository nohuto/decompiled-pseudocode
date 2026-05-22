/*
 * XREFs of ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800E1490
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800E4EA0 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

GazeDeviceCollection *__fastcall GazeDeviceCollection::`vector deleting destructor'(
        GazeDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &GazeDeviceCollection::`vftable';
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

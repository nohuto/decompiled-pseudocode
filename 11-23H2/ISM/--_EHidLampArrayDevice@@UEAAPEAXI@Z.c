/*
 * XREFs of ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800F02E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800F00D0 (--1HidLampArrayDevice@@UEAA@XZ.c)
 */

RefCountedObject **__fastcall HidLampArrayDevice::`vector deleting destructor'(
        RefCountedObject **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di

  v4 = a2;
  HidLampArrayDevice::~HidLampArrayDevice(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

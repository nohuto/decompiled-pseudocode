/*
 * XREFs of ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x1800D1C80
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800D1B18 (--1LampArrayDevice@@UEAA@XZ.c)
 */

LampArrayDevice *__fastcall LampArrayDevice::`vector deleting destructor'(LampArrayDevice *this, char a2)
{
  LampArrayDevice::~LampArrayDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

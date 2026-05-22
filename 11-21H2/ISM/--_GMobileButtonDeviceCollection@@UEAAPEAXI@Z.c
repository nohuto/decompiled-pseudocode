/*
 * XREFs of ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x1800C4520
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800C4408 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 */

MobileButtonDeviceCollection *__fastcall MobileButtonDeviceCollection::`scalar deleting destructor'(
        MobileButtonDeviceCollection *this,
        char a2)
{
  MobileButtonDeviceCollection::~MobileButtonDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

/*
 * XREFs of ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800EEDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800EED2C (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 */

SystemControlDeviceCollection *__fastcall SystemControlDeviceCollection::`scalar deleting destructor'(
        SystemControlDeviceCollection *this,
        char a2)
{
  SystemControlDeviceCollection::~SystemControlDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

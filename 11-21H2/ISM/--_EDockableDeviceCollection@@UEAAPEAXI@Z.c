/*
 * XREFs of ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x1800C9C10
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800C9A20 (--1DockableDeviceCollection@@UEAA@XZ.c)
 */

DockableDeviceCollection *__fastcall DockableDeviceCollection::`vector deleting destructor'(
        DockableDeviceCollection *this,
        char a2)
{
  DockableDeviceCollection::~DockableDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

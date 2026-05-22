/*
 * XREFs of ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x1800F2210
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800F2010 (--1DockableDeviceCollection@@UEAA@XZ.c)
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

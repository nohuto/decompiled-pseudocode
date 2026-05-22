/*
 * XREFs of ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x1800F0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800F0D00 (--1DockDeviceCollection@@UEAA@XZ.c)
 */

DockDeviceCollection *__fastcall DockDeviceCollection::`scalar deleting destructor'(
        DockDeviceCollection *this,
        char a2)
{
  DockDeviceCollection::~DockDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

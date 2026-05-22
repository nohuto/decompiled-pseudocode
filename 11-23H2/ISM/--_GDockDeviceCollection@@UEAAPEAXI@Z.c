/*
 * XREFs of ??_GDockDeviceCollection@@UEAAPEAXI@Z @ 0x1800E1E70
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800E1DA0 (--1DockDeviceCollection@@UEAA@XZ.c)
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

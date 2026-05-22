/*
 * XREFs of ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x1800BF100
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800BEDA0 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 */

SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::`vector deleting destructor'(
        SpatialRimDeviceCollection *this,
        void *a2)
{
  char v2; // di

  v2 = (char)a2;
  SpatialRimDeviceCollection::~SpatialRimDeviceCollection(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}

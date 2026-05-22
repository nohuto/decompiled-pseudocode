/*
 * XREFs of ??_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z @ 0x1800BF160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800BEE78 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 */

SpatialRimDeviceCollectionCallbacks *__fastcall SpatialRimDeviceCollectionCallbacks::`scalar deleting destructor'(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}

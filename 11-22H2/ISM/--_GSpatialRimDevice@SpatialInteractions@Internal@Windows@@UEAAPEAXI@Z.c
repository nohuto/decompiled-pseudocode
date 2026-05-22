/*
 * XREFs of ??_GSpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800E6F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800E6B38 (--1SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialRimDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        char a2)
{
  Windows::Internal::SpatialInteractions::SpatialRimDevice::~SpatialRimDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

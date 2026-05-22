/*
 * XREFs of ??_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z @ 0x1800E6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ @ 0x1800E6D2C (--1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ.c)
 */

SpatialRimDeviceCollectionHeadEventHandler *__fastcall SpatialRimDeviceCollectionHeadEventHandler::`scalar deleting destructor'(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        char a2)
{
  SpatialRimDeviceCollectionHeadEventHandler::~SpatialRimDeviceCollectionHeadEventHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

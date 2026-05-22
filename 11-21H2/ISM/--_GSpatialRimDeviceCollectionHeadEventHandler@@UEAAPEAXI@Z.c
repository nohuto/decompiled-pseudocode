/*
 * XREFs of ??_GSpatialRimDeviceCollectionHeadEventHandler@@UEAAPEAXI@Z @ 0x1800BF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ @ 0x1800BEEB8 (--1SpatialRimDeviceCollectionHeadEventHandler@@UEAA@XZ.c)
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

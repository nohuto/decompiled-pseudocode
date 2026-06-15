/*
 * XREFs of ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180005FE0
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z @ 0x180077780 (--_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18000601C (--1SpatialAudioDeviceStateWriter@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::`vector deleting destructor'(
        SpatialAudioDeviceStateWriter *this,
        char a2)
{
  SpatialAudioDeviceStateWriter::~SpatialAudioDeviceStateWriter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x290uLL);
  return this;
}

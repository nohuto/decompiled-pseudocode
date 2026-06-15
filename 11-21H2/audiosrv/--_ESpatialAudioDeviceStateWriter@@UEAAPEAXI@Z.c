/*
 * XREFs of ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180138100
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z @ 0x18006BF80 (--_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18013806C (--1SpatialAudioDeviceStateWriter@@UEAA@XZ.c)
 */

SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::`vector deleting destructor'(
        SpatialAudioDeviceStateWriter *this,
        char a2)
{
  SpatialAudioDeviceStateWriter::~SpatialAudioDeviceStateWriter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

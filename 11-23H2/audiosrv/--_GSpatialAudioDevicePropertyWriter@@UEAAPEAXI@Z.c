/*
 * XREFs of ??_GSpatialAudioDevicePropertyWriter@@UEAAPEAXI@Z @ 0x1801427A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialAudioDevicePropertyWriter@@UEAA@XZ @ 0x1801426E8 (--1SpatialAudioDevicePropertyWriter@@UEAA@XZ.c)
 */

SpatialAudioDevicePropertyWriter *__fastcall SpatialAudioDevicePropertyWriter::`scalar deleting destructor'(
        SpatialAudioDevicePropertyWriter *this,
        char a2)
{
  SpatialAudioDevicePropertyWriter::~SpatialAudioDevicePropertyWriter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

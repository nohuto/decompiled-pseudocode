/*
 * XREFs of ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18002D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialAudioDevicePropertyReader@@UEAA@XZ @ 0x18002D61C (--1SpatialAudioDevicePropertyReader@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::`vector deleting destructor'(
        SpatialAudioDevicePropertyReader *this,
        char a2)
{
  SpatialAudioDevicePropertyReader::~SpatialAudioDevicePropertyReader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x208uLL);
  return this;
}

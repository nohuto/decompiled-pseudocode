/*
 * XREFs of ??_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z @ 0x180138B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialAudioEncoderProperties@@UEAA@XZ @ 0x180138AB0 (--1SpatialAudioEncoderProperties@@UEAA@XZ.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::`scalar deleting destructor'(
        SpatialAudioEncoderProperties *this,
        char a2)
{
  SpatialAudioEncoderProperties::~SpatialAudioEncoderProperties(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

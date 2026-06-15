/*
 * XREFs of ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x18013A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x18013A928 (--1SpatialAudioMetadataDictionary@@UEAA@XZ.c)
 */

SpatialAudioMetadataDictionary *__fastcall SpatialAudioMetadataDictionary::`scalar deleting destructor'(
        SpatialAudioMetadataDictionary *this,
        char a2)
{
  SpatialAudioMetadataDictionary::~SpatialAudioMetadataDictionary(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180138140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x1801380BC (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioIO *__fastcall SpatialAudioIO::`scalar deleting destructor'(SpatialAudioIO *this, char a2)
{
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

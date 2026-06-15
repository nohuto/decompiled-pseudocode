/*
 * XREFs of ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180144FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18000606C (--1SpatialAudioIO@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

SpatialAudioStateIO *__fastcall SpatialAudioStateIO::`scalar deleting destructor'(SpatialAudioStateIO *this, char a2)
{
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z @ 0x180133A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180133784 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 */

Sarm::CSpatialAudioResourceManager *__fastcall Sarm::CSpatialAudioResourceManager::`vector deleting destructor'(
        Sarm::CSpatialAudioResourceManager *this,
        char a2)
{
  Sarm::CSpatialAudioResourceManager::~CSpatialAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x180113A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CBtAudioResourceManager@@UEAA@XZ @ 0x18011397C (--1CBtAudioResourceManager@@UEAA@XZ.c)
 */

CBtAudioResourceManager *__fastcall CBtAudioResourceManager::`scalar deleting destructor'(
        CBtAudioResourceManager *this,
        char a2)
{
  CBtAudioResourceManager::~CBtAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

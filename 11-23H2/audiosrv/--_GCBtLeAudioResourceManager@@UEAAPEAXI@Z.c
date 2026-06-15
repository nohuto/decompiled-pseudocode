/*
 * XREFs of ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F57A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F5590 (--1CBtLeAudioResourceManager@@UEAA@XZ.c)
 */

CBtLeAudioResourceManager *__fastcall CBtLeAudioResourceManager::`scalar deleting destructor'(
        CBtLeAudioResourceManager *this,
        char a2)
{
  CBtLeAudioResourceManager::~CBtLeAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

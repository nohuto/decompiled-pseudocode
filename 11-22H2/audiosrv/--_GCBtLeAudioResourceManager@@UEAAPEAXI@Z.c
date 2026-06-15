/*
 * XREFs of ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F57F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F55E0 (--1CBtLeAudioResourceManager@@UEAA@XZ.c)
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

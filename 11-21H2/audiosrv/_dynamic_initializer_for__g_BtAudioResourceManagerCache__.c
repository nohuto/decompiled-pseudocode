/*
 * XREFs of _dynamic_initializer_for__g_BtAudioResourceManagerCache__ @ 0x180001A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBtAudioResourceManagerCache@@QEAA@XZ @ 0x180042BD0 (--0CBtAudioResourceManagerCache@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_BtAudioResourceManagerCache__(CBtAudioResourceManagerCache *a1)
{
  CBtAudioResourceManagerCache::CBtAudioResourceManagerCache(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_BtAudioResourceManagerCache__);
}

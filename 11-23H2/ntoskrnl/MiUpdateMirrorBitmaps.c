/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140A2F0F8
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B45F30 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x140A2EFF8 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap((__int64)&xmmword_140C67E90[v0], 0) )
  {
    if ( (unsigned int)++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}

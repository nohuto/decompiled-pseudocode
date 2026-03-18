/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x1406AAA00
 * Callers:
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1406AA700 (MiRelocateImageAgain.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmap @ 0x1406AB494 (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap();
}

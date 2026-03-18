/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x1402F35B8
 * Callers:
 *     ObpInsertHandleCount @ 0x1406A340C (ObpInsertHandleCount.c)
 *     ObpReleaseHandleInfo @ 0x1407A33E8 (ObpReleaseHandleInfo.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14098485C (ObpUnlockHandleDatabaseEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}

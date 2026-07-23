/*
 * XREFs of MiIsFreeSlabPage @ 0x1406575E8
 * Callers:
 *     MiIsPageSecured @ 0x1402EEFC0 (MiIsPageSecured.c)
 *     MiPurgeSlabEntries @ 0x14036B810 (MiPurgeSlabEntries.c)
 * Callees:
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 */

__int64 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rcx

  v2 = MiCheckSlabPfnBitmap(a1, 1LL, 0);
  v3 = 0;
  if ( !v2 || (*(_BYTE *)(a1 + 34) & 7) != 5 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == -1 )
    return 1LL;
  LOBYTE(v3) = v4 == -2;
  return v3;
}

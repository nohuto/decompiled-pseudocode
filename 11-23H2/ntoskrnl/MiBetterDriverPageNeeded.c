/*
 * XREFs of MiBetterDriverPageNeeded @ 0x140355358
 * Callers:
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 * Callees:
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 */

__int64 __fastcall MiBetterDriverPageNeeded(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( (unsigned int)MiCheckSlabPfnBitmap(48 * a2 - 0x220000000000LL, 1LL, 0) )
    return 0LL;
  if ( a3 == -1LL )
    return !*(_QWORD *)(a1 + 16264) || a2 < *(_QWORD *)(a1 + 16248);
  if ( (unsigned int)MiCheckSlabPfnBitmap(48 * a3 - 0x220000000000LL, 1LL, 0) )
    return 1LL;
  LOBYTE(v6) = a2 < a3;
  return v6;
}

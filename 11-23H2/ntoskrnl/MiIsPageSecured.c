/*
 * XREFs of MiIsPageSecured @ 0x1402EEFC0
 * Callers:
 *     MiCopySinglePage @ 0x1402EEB4C (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x140626C80 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x14062F878 (MiAddNonSecuredPagesToDump.c)
 *     MiFilterCrashDumpPte @ 0x14062FF50 (MiFilterCrashDumpPte.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1406575E8 (MiIsFreeSlabPage.c)
 */

__int64 __fastcall MiIsPageSecured(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi

  if ( (MiFlags & 0x4000) == 0 )
    return 0LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 3 )
    return 0LL;
  v2 = 0;
  if ( *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && (!(unsigned int)MiIsFreeSlabPage() || v3 != -2LL) )
  {
    if ( v3 <= 0xFFFFF6BFFFFFFF78uLL )
    {
      LOBYTE(v2) = v3 >= 0xFFFFF68000000000uLL;
      return v2;
    }
    return 0LL;
  }
  return 1LL;
}

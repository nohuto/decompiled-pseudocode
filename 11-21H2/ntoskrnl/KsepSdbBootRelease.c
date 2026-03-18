/*
 * XREFs of KsepSdbBootRelease @ 0x14084DC30
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x14084DB84 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140B01670 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x1406E0A70 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbBootRelease(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    SdbReleaseDatabase(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    KsepPoolFreePaged(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}

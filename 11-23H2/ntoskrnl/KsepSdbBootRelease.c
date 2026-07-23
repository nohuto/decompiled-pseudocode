/*
 * XREFs of KsepSdbBootRelease @ 0x140843E74
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x140843DC4 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140B73254 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140209E80 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x140695574 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbBootRelease(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD **)a1;
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

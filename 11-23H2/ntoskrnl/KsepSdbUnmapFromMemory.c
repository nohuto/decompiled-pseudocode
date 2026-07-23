/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x1406950AC
 * Callers:
 *     KseShimDatabaseOpen @ 0x140694C20 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x140694D78 (KseShimDatabaseClose.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x140695574 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbUnmapFromMemory(__int64 a1)
{
  void *v2; // rcx
  ULONG_PTR v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    SdbReleaseDatabase(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    MiRemoveFromSystemSpace(v3, 1);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    ZwClose(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 )
  {
    ZwClose(v6);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

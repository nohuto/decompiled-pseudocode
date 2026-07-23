/*
 * XREFs of PiReleaseDDB @ 0x14069576C
 * Callers:
 *     PiLookupInDDB @ 0x140692E10 (PiLookupInDDB.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x14041B630 (ZwUnmapViewOfSection.c)
 *     SdbReleaseDatabase @ 0x140695574 (SdbReleaseDatabase.c)
 */

__int64 __fastcall PiReleaseDDB(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
    SdbReleaseDatabase(v2);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
  v4 = *(void **)(a1 + 16);
  if ( v4 )
    ZwClose(v4);
  v5 = *(void **)(a1 + 24);
  if ( v5 )
    ZwClose(v5);
  return 0LL;
}

/*
 * XREFs of SdbCloseDatabaseRead @ 0x18009512C
 * Callers:
 *     SdbReleaseDatabase @ 0x180095694 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x180095D78 (SdbInitDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x180095FC0 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x18009C438 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslFileMappingDelete @ 0x18009F2A4 (AslFileMappingDelete.c)
 *     AslHashFree @ 0x1800A2D68 (AslHashFree.c)
 */

BOOLEAN __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // r8
  void *v3; // rcx
  void *v4; // r8

  v1 = *(_QWORD *)(a1 + 1360);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    if ( !*(_QWORD *)(v1 + 8)
      || (RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(v1 + 8)), (v1 = *(_QWORD *)(a1 + 1360)) != 0) )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v1);
    }
    *(_QWORD *)(a1 + 1360) = 0LL;
    v3 = *(void **)(a1 + 1368);
    if ( v3 )
    {
      AslHashFree(v3);
      *(_QWORD *)(a1 + 1368) = 0LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 24) & 8) != 0 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 20) = 0;
    }
  }
  AslFileMappingDelete(*(PVOID *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}

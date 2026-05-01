/*
 * XREFs of SdbCloseDatabaseRead @ 0x18008FD34
 * Callers:
 *     SdbReleaseDatabase @ 0x180090334 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x180090A10 (SdbInitDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x180090DB0 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x180096FBC (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslFileMappingDelete @ 0x180099900 (AslFileMappingDelete.c)
 *     AslHashFree @ 0x18009FBC0 (AslHashFree.c)
 */

BOOLEAN __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // r8
  void *v4; // r8
  void *v5; // rcx
  void *v6; // r8

  v1 = *(_QWORD *)(a1 + 2640);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v3 = *(void **)(v1 + 8);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    v4 = *(void **)(a1 + 2640);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    *(_QWORD *)(a1 + 2640) = 0LL;
    v5 = *(void **)(a1 + 2648);
    if ( v5 )
    {
      AslHashFree(v5);
      *(_QWORD *)(a1 + 2648) = 0LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 24) & 8) != 0 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v6 = *(void **)(a1 + 8);
    if ( v6 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 20) = 0;
    }
  }
  AslFileMappingDelete(*(PVOID *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}

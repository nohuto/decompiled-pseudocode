/*
 * XREFs of SdbpReadMappedData @ 0x140742A7C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140695260 (SdbpOpenDatabaseInMemory.c)
 *     SdbpGetTagHeadSize @ 0x140742168 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbOpenDatabaseEx @ 0x140A4E800 (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A534B8 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 || *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
    return 1LL;
  }
}

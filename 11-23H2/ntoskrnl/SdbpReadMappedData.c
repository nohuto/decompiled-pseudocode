/*
 * XREFs of SdbpReadMappedData @ 0x14074288C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140695260 (SdbpOpenDatabaseInMemory.c)
 *     SdbpGetTagHeadSize @ 0x140741F78 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x14075749C (SdbpReadTagData.c)
 *     SdbOpenDatabaseEx @ 0x140A4E550 (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A53208 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
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

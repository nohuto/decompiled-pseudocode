/*
 * XREFs of SdbpReadMappedData @ 0x180095AA0
 * Callers:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x180095474 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800959A8 (SdbpOpenDatabaseInMemory.c)
 *     SdbGetTagDataSize @ 0x180099284 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180099868 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 * Callees:
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      712,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memcpy_0(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      717,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
  }
  return 0LL;
}

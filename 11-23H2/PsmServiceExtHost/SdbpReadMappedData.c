/*
 * XREFs of SdbpReadMappedData @ 0x180090738
 * Callers:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x180090084 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x180090640 (SdbpOpenDatabaseInMemory.c)
 *     SdbGetTagDataSize @ 0x180093FE4 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1800945C8 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x1800946D4 (SdbpReadTagData.c)
 * Callees:
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  int v7; // [rsp+30h] [rbp-18h]

  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      796,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memcpy_0(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    v7 = *(_DWORD *)(a1 + 20);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      801,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)",
      a2,
      a4,
      v7);
  }
  return 0LL;
}

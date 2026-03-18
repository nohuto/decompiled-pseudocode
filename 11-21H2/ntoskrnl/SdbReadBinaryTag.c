/*
 * XREFs of SdbReadBinaryTag @ 0x1407ED29C
 * Callers:
 *     SdbGetDatabaseID @ 0x1407ED1D8 (SdbGetDatabaseID.c)
 *     SdbReadEntryInformation @ 0x140842F74 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1408437A4 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A124A4 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140A1329C (SdbReadGUIDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140791084 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}

/*
 * XREFs of SdbReadBinaryTag @ 0x140695430
 * Callers:
 *     SdbGetDatabaseID @ 0x140695370 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x14084E54C (SdbpGetExeEntryFlags.c)
 *     SdbReadGUIDTag @ 0x140855AB4 (SdbReadGUIDTag.c)
 *     SdbReadEntryInformation @ 0x140A4F624 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A51118 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075768C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // r8

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 923, (unsigned int)"Error reading buffer");
  }
  else
  {
    SdbGetTagFromTagID(a1, v6, v8);
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 918, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  }
  return 0LL;
}

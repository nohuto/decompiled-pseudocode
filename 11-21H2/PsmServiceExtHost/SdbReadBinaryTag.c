/*
 * XREFs of SdbReadBinaryTag @ 0x18009936C
 * Callers:
 *     SdbGetDatabaseID @ 0x180095224 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x180096860 (SdbpApphelpExeInfo.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B64C (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x9000 )
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 918, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 923, (unsigned int)"Error reading buffer");
    return 0LL;
  }
  return 1LL;
}

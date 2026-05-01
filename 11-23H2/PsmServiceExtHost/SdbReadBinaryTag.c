/*
 * XREFs of SdbReadBinaryTag @ 0x1800940CC
 * Callers:
 *     SdbGetDatabaseID @ 0x18008FE28 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x18009162C (SdbpApphelpExeInfo.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800961C4 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1800946D4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x9000 )
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v6);
    v9 = v6;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadBinaryTag",
      918,
      (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type",
      v9,
      TagFromTagID);
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 923, (unsigned int)"Error reading buffer");
    return 0LL;
  }
  return 1LL;
}

/*
 * XREFs of SdbGetBinaryTagData @ 0x180099160
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B8A0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x18009966C (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1, (unsigned int)"SdbGetBinaryTagData", 948, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  return 0LL;
}

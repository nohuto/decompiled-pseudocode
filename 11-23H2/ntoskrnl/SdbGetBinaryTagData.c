/*
 * XREFs of SdbGetBinaryTagData @ 0x140A52064
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x140A51344 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140740B7C (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140757E70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, unsigned int a2)
{
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, a2);
  SdbGetTagFromTagID(a1, a2);
  AslLogCallPrintf(1LL);
  return 0LL;
}

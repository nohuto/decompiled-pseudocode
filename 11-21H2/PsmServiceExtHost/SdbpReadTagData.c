/*
 * XREFs of SdbpReadTagData @ 0x180099974
 * Callers:
 *     SdbReadBinaryTag @ 0x18009936C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800994C4 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180099564 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x1800998C8 (SdbpReadStringRef.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180095AA0 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x180099284 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180099868 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 352, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
    return 0LL;
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v6);
  if ( !(unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 359, (unsigned int)"Error reading tag data");
    return 0LL;
  }
  return 1LL;
}

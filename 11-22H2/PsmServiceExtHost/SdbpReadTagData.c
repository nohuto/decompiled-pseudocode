/*
 * XREFs of SdbpReadTagData @ 0x180094A34
 * Callers:
 *     SdbReadBinaryTag @ 0x18009442C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180094584 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180094624 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x180094988 (SdbpReadStringRef.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180090A98 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x180094344 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180094928 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // eax
  unsigned int v9; // ebx
  int TagHeadSize; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  unsigned int v13; // [rsp+28h] [rbp-10h]

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  v9 = TagDataSize;
  if ( TagDataSize > a4 )
  {
    v13 = TagDataSize;
    v12 = a4;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadTagData",
      352,
      (unsigned int)"Buffer too small. Avail: %d, Need: %d",
      v12,
      v13);
    return 0LL;
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v6);
  if ( !(unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, v9) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 359, (unsigned int)"Error reading tag data");
    return 0LL;
  }
  return 1LL;
}

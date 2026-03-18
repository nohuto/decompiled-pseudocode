/*
 * XREFs of SdbpReadTagData @ 0x140791084
 * Callers:
 *     SdbReadWORDTag @ 0x14078F124 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1407ECF5C (SdbReadDWORDTag.c)
 *     SdbReadBinaryTag @ 0x1407ED29C (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x140842904 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x140842BCC (SdbpReadStringRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140793480 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14079422C (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140797F3C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize <= a4 )
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}

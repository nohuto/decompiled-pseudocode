/*
 * XREFs of SdbpReadTagData @ 0x14075768C
 * Callers:
 *     SdbReadBinaryTag @ 0x140695430 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x140755648 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x140755E5C (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x140757628 (SdbpReadStringRef.c)
 *     SdbReadQWORDTag @ 0x140808F84 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140742168 (SdbpGetTagHeadSize.c)
 *     SdbpReadMappedData @ 0x140742A7C (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x140757D80 (SdbGetTagDataSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
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

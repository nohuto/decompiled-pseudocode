/*
 * XREFs of sub_140379C24 @ 0x140379C24
 * Callers:
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 *     sub_1405FBB30 @ 0x1405FBB30 (sub_1405FBB30.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_140385FB0 @ 0x140385FB0 (sub_140385FB0.c)
 */

__int64 __fastcall sub_140379C24(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      sub_14037AE58(a2, 5LL, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  if ( MemoryDescriptorList->Next )
  {
    sub_14037AE58(a2, 4LL, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return sub_140385FB0(MemoryDescriptorList);
}

/*
 * XREFs of MiDeleteImageCreationMdls @ 0x140705E1C
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MiCreateMdl @ 0x1407084B0 (MiCreateMdl.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x14029BA28 (MiReturnPfnReferenceCount.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL MemoryDescriptorList, int a2)
{
  PMDL v3; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // r14
  struct _MDL *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 i; // rdi

  if ( MemoryDescriptorList )
  {
    v3 = MemoryDescriptorList;
    do
    {
      MdlFlags = v3->MdlFlags;
      Next = v3->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v3->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v3->MappedSystemVa, v3);
        if ( a2 )
        {
          v6 = v3 + 1;
          v7 = (unsigned __int64)v3->ByteCount >> 12;
          for ( i = 0LL; i < v7; ++i )
          {
            if ( v6->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v6->Next - 0x220000000000LL);
            v6 = (struct _MDL *)((char *)v6 + 8);
          }
        }
      }
      IoFreeMdl(v3);
      v3 = Next;
    }
    while ( Next );
  }
}

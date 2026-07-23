/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x1409448E0
 * Callers:
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopCleanupProcessResources @ 0x1407CB48C (IopCleanupProcessResources.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14022D020 (RtlLookupElementGenericTableAvl.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14031EC60 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  char *v2; // rsi
  _QWORD *v3; // rbp
  char *v4; // rbx
  void *v5; // rcx
  PMDL *v6; // rdi
  __int64 v7; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  v2 = 0LL;
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  v3 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  v4 = (char *)v3[1];
  if ( v4 )
  {
    while ( *(_QWORD *)(a1 + 16) != *((_QWORD *)v4 + 3) )
    {
      v2 = v4;
      v4 = (char *)*((_QWORD *)v4 + 5);
      if ( !v4 )
        goto LABEL_6;
    }
    --*(_DWORD *)v4;
  }
LABEL_6:
  if ( !*(_DWORD *)v4 )
  {
    v5 = (void *)*((_QWORD *)v4 + 4);
    v6 = (PMDL *)(v4 + 24);
    if ( v5 )
      MmUnmapLockedPages(v5, *v6);
    MmUnlockPages(*v6);
    IoFreeMdl(*v6);
    v7 = *((_QWORD *)v4 + 5);
    if ( v2 )
      *((_QWORD *)v2 + 5) = v7;
    else
      v3[1] = v7;
    ExFreePoolWithTag(v4, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  ExReleaseFastMutex(&IoStatusBlockRangeTableLock);
}

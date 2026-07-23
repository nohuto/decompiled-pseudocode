/*
 * XREFs of sub_140AA0838 @ 0x140AA0838
 * Callers:
 *     sub_140A9F7F0 @ 0x140A9F7F0 (sub_140A9F7F0.c)
 *     sub_140A9FA80 @ 0x140A9FA80 (sub_140A9FA80.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140A9A1DC @ 0x140A9A1DC (sub_140A9A1DC.c)
 */

void __fastcall sub_140AA0838(PMDL MemoryDescriptorList, int a2, char a3)
{
  ULONG ByteCount; // edi
  PVOID MappedSystemVa; // r14
  unsigned int v6; // esi
  PVOID v7; // rax
  void *v8; // rbp

  if ( (a3 & 1) != 0 && a2 == 1 )
  {
    ByteCount = MemoryDescriptorList->ByteCount;
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    v6 = 4096;
    MemoryDescriptorList->ByteCount = 4096;
    v7 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v8 = v7;
    if ( v7 )
    {
      if ( ByteCount < 0x1000 )
        v6 = ByteCount;
      sub_140A9A1DC(v7, v6);
      MmUnmapLockedPages(v8, MemoryDescriptorList);
      MemoryDescriptorList->MappedSystemVa = MappedSystemVa;
    }
    MemoryDescriptorList->ByteCount = ByteCount;
  }
}

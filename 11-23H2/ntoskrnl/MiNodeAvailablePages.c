/*
 * XREFs of MiNodeAvailablePages @ 0x14046D0A6
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x14065763C (MiLogSlabEntryAllocateFailure.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2C13C (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1402E87B4 (MiNodeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeAvailablePages(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  for ( i = 0; i < MmNumberOfChannels; ++i )
  {
    v1 += MiNodeFreeZeroPages(a1, i, 4096);
    v4 = 8LL;
    v5 = &a1[88 * i + 407];
    do
    {
      v6 = *v5;
      v5 += 11;
      v1 += v6;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}

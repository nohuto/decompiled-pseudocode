/*
 * XREFs of MiCreateBootSlabEntries @ 0x140B04E44
 * Callers:
 *     MiCreateKernelHalSlabRange @ 0x140B04C20 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B0A424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 * Callees:
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiInsertSlabEntry @ 0x1403C2B24 (MiInsertSlabEntry.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCreateBootSlabEntries(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  RTL_BITMAP *Pool; // rax
  unsigned __int64 v10; // rdi
  int v12; // ecx

  v5 = a3;
  v6 = a2;
  v8 = 48 * a2 - 0x220000000000LL;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    Pool = (RTL_BITMAP *)MiAllocatePool(64, 0x90uLL, 0x6553694Du);
    v10 = (unsigned __int64)Pool;
    if ( !Pool )
      return 3221225626LL;
    Pool[2].Buffer = (unsigned int *)a1;
    Pool[3].SizeOfBitMap = 512;
    Pool[3].Buffer = &Pool[4].SizeOfBitMap;
    *(_QWORD *)&Pool[2].SizeOfBitMap = v6 + 511;
    Pool[1].Buffer = (unsigned int *)v6;
    RtlSetAllBits(Pool + 3);
    if ( a4 )
      *(_DWORD *)(v10 + 140) |= 1u;
    if ( *(_DWORD *)(a1 + 48) > 3u )
      goto LABEL_6;
    v12 = 512;
    do
    {
      if ( !*(_QWORD *)(v8 + 8) )
        --qword_140C53530;
      v8 += 48LL;
      --v12;
    }
    while ( v12 );
    if ( *(_DWORD *)(a1 + 48) > 3u )
LABEL_6:
      qword_140C59408 += 512LL;
    if ( _bittest64((const signed __int64 *)qword_140C58DE0, v6 >> 9) )
      KeBugCheckEx(0x1Au, 0x3030311uLL, *(_QWORD *)(v10 + 24), *(int *)(a1 + 48), 0LL);
    _bittestandset64((signed __int64 *)qword_140C58DE0, v6 >> 9);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, 0x200uLL, 1, 0);
    MiInsertSlabEntry((__int64)&MiSystemPartition, a1, v10);
    v6 += 512LL;
    v5 -= 512LL;
    if ( !v5 )
      return 0LL;
  }
}

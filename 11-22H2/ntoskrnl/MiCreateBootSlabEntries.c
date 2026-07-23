/*
 * XREFs of MiCreateBootSlabEntries @ 0x140B49F68
 * Callers:
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B48744 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateKernelHalSlabRange @ 0x140B49DA0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14028551C (MiUpdatePageFileHighInPte.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     RtlSetAllBits @ 0x1402E1AE0 (RtlSetAllBits.c)
 *     MiInsertSlabEntry @ 0x1402E7080 (MiInsertSlabEntry.c)
 *     MiUpdateLargePageBitMap @ 0x1402E890C (MiUpdateLargePageBitMap.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCreateBootSlabEntries(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v8; // r13
  _RTL_BITMAP *Pool; // rax
  __int64 v10; // rdi
  _DWORD *v11; // r10
  int v12; // eax
  __int64 v13; // r14
  __int64 *v15; // r11
  int v16; // ebx
  __int64 v17; // rbp
  __int64 updated; // rax
  int v19; // r9d
  unsigned __int64 v20; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v22; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v24; // zf
  signed __int32 v25; // eax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a3 )
    return 0LL;
  v8 = 48 * a2 - 0x21FFFFFFFFF0LL;
  while ( 1 )
  {
    Pool = (_RTL_BITMAP *)MiAllocatePool(64, 0x90uLL, 0x6553694Du);
    v10 = (__int64)Pool;
    if ( !Pool )
      return 3221225626LL;
    Pool[2].Buffer = (unsigned int *)a1;
    Pool[3].SizeOfBitMap = 512;
    Pool[3].Buffer = &Pool[4].SizeOfBitMap;
    *(_QWORD *)&Pool[2].SizeOfBitMap = v6 + 511;
    Pool[1].Buffer = (unsigned int *)v6;
    RtlSetAllBits(Pool + 3);
    v11 = (_DWORD *)(v10 + 140);
    if ( v4 )
      *v11 |= 3u;
    v12 = dword_140C6F46C;
    if ( _bittest(&v12, *(_DWORD *)(a1 + 80)) )
      *v11 |= 2u;
    v13 = 0LL;
    if ( *(_DWORD *)(a1 + 80) <= 3u )
    {
      v15 = (__int64 *)v8;
      v16 = 512;
      v8 += 24576LL;
      do
      {
        v17 = v13;
        if ( !*(v15 - 1) )
        {
          updated = MiUpdatePageFileHighInPte(*v15, (*v11 & 2) != 0 ? 7LL : 3LL);
          *v15 = updated;
          ++v13;
          --qword_140C69AB0;
          if ( v19 )
            v13 = v17;
        }
        v15 += 6;
        --v16;
      }
      while ( v16 );
    }
    if ( (*v11 & 1) != 0 )
      qword_140C6FAD0 += 512LL;
    if ( (*v11 & 2) != 0 )
      goto LABEL_12;
    v20 = 512 - v13;
    if ( v13 != 512 )
    {
      MiReturnCommit((__int64)MiSystemPartition, 512 - v13);
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = 512 - v13;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_32;
      if ( v20 + CachedResidentAvailable <= 0x100 && v20 < 0x80000 )
      {
        do
        {
          v25 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v20,
                  CachedResidentAvailable);
          v24 = (_DWORD)CachedResidentAvailable == v25;
          LODWORD(CachedResidentAvailable) = v25;
          if ( v24 )
            goto LABEL_33;
        }
        while ( v25 != -1 && v20 + v25 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v22 = v20 + (int)CachedResidentAvailable - 192;
      }
      if ( v22 )
LABEL_32:
        _InterlockedExchangeAdd64(&qword_140C6F880, v22);
LABEL_33:
      qword_140C69AA8 -= v20;
    }
    qword_140C6FAD8 += v13;
LABEL_12:
    if ( _bittest64((const signed __int64 *)qword_140C6F430, v6 >> 9) )
      KeBugCheckEx(0x1Au, 0x3030311uLL, *(_QWORD *)(v10 + 24), *(int *)(a1 + 80), 0LL);
    _bittestandset64((signed __int64 *)qword_140C6F430, v6 >> 9);
    MiUpdateLargePageBitMap((__int64)MiSystemPartition, v6, 0x200uLL, 1, 0);
    MiInsertSlabEntry((__int64)MiSystemPartition, a1, v10, 0);
    v4 = a4;
    v6 += 512LL;
    v5 -= 512LL;
    if ( !v5 )
      return 0LL;
  }
}

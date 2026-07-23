/*
 * XREFs of sub_140504DAC @ 0x140504DAC
 * Callers:
 *     sub_140504358 @ 0x140504358 (sub_140504358.c)
 *     sub_140516470 @ 0x140516470 (sub_140516470.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140516878 @ 0x140516878 (sub_140516878.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 */

__int64 __fastcall sub_140504DAC(PDMA_ADAPTER DmaAdapter)
{
  KSPIN_LOCK *p_Version; // r14
  PDMA_OPERATIONS v3; // rdi
  KIRQL v4; // al
  PDMA_OPERATIONS *p_DmaOperations; // rcx
  unsigned __int64 v6; // rsi
  struct _DMA_ADAPTER *DmaOperations; // rax
  char v8; // bp
  __int64 v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf
  int AllocateCommonBuffer; // ecx

  p_Version = (KSPIN_LOCK *)&DmaAdapter[35].Version;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DmaAdapter[35].Version);
  p_DmaOperations = &DmaAdapter[35].DmaOperations;
  v6 = v4;
  DmaOperations = (struct _DMA_ADAPTER *)DmaAdapter[35].DmaOperations;
  if ( DmaOperations == (struct _DMA_ADAPTER *)&DmaAdapter[35].DmaOperations )
  {
    v8 = 1;
    LOBYTE(DmaAdapter[36].DmaOperations) = 0;
  }
  else
  {
    v3 = DmaAdapter[35].DmaOperations;
    v8 = 0;
    v9 = *(_QWORD *)&DmaOperations->Version;
    if ( (PDMA_OPERATIONS *)v3->PutDmaAdapter != p_DmaOperations || *(PDMA_OPERATIONS *)(v9 + 8) != v3 )
      __fastfail(3u);
    *p_DmaOperations = (PDMA_OPERATIONS)v9;
    *(_QWORD *)(v9 + 8) = p_DmaOperations;
  }
  KeReleaseSpinLockFromDpcLevel(p_Version);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= result;
        if ( v13 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( !v8 )
  {
    AllocateCommonBuffer = (int)v3->AllocateCommonBuffer;
    if ( AllocateCommonBuffer )
    {
      if ( AllocateCommonBuffer != 1 )
        return result;
    }
    else if ( LODWORD(DmaAdapter[38].DmaOperations) == 3 )
    {
      DmaAdapter[14].DmaOperations->FreeCommonBuffer = (PFREE_COMMON_BUFFER)DmaAdapter[34].DmaOperations;
      ++LODWORD(DmaAdapter[38].DmaOperations);
      return sub_140517830(DmaAdapter);
    }
    return sub_140516878(v3);
  }
  return result;
}

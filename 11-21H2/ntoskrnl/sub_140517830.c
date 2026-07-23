/*
 * XREFs of sub_140517830 @ 0x140517830
 * Callers:
 *     sub_140504DAC @ 0x140504DAC (sub_140504DAC.c)
 *     sub_140512444 @ 0x140512444 (sub_140512444.c)
 *     sub_1405127BC @ 0x1405127BC (sub_1405127BC.c)
 *     sub_140517630 @ 0x140517630 (sub_140517630.c)
 *     sub_140519E90 @ 0x140519E90 (sub_140519E90.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140504A84 @ 0x140504A84 (sub_140504A84.c)
 *     sub_140504BA4 @ 0x140504BA4 (sub_140504BA4.c)
 *     sub_140504FE8 @ 0x140504FE8 (sub_140504FE8.c)
 *     sub_14050905C @ 0x14050905C (sub_14050905C.c)
 *     sub_1405116C0 @ 0x1405116C0 (sub_1405116C0.c)
 *     sub_140513AD4 @ 0x140513AD4 (sub_140513AD4.c)
 *     sub_140518F1C @ 0x140518F1C (sub_140518F1C.c)
 *     sub_140519B94 @ 0x140519B94 (sub_140519B94.c)
 */

char __fastcall sub_140517830(PDMA_ADAPTER DmaAdapter, char a2, int *a3)
{
  int DmaOperations; // r9d
  PDMA_OPERATIONS v5; // rdi
  unsigned int v9; // esi
  struct _DMA_OPERATIONS *v10; // rax
  struct _DMA_OPERATIONS *v11; // rcx
  int AllocateCommonBuffer_high; // eax
  unsigned int i; // eax
  PFREE_COMMON_BUFFER *p_FreeCommonBuffer; // rsi
  int v15; // eax

  DmaOperations = (int)DmaAdapter[38].DmaOperations;
  v5 = DmaAdapter[21].DmaOperations;
  switch ( DmaOperations )
  {
    case 0:
      LODWORD(DmaAdapter[38].DmaOperations) = 1;
LABEL_8:
      if ( !HIBYTE(DmaAdapter[27].Version) && !(unsigned __int8)sub_140518F1C(DmaAdapter) )
        goto LABEL_16;
      DmaOperations = ++LODWORD(DmaAdapter[38].DmaOperations);
      goto LABEL_11;
    case 1:
      goto LABEL_8;
    case 2:
LABEL_11:
      v9 = *(_DWORD *)&DmaAdapter[15].Version;
      if ( v9 && LOBYTE(DmaAdapter[27].Version) )
      {
        v10 = (struct _DMA_OPERATIONS *)sub_140456F16((__int64)DmaAdapter, v9);
        DmaAdapter[14].DmaOperations = v10;
        v11 = v10;
        if ( !v10 )
        {
          sub_14050905C((__int64)DmaAdapter, v9);
          if ( (HIDWORD(v5->AllocateCommonBuffer) & 1) == 0 )
            sub_140513AD4((__int64)DmaAdapter);
          goto LABEL_16;
        }
        v10->FreeCommonBuffer = 0LL;
        v10->AllocateAdapterChannel = 0LL;
        v10->FlushAdapterBuffers = 0LL;
        if ( (HIDWORD(v5->AllocateCommonBuffer) & 4) != 0 )
        {
          for ( i = 0; i < v9; ++i )
          {
            if ( !v11 )
              break;
            v11->FreeAdapterChannel = (PFREE_ADAPTER_CHANNEL)((unsigned __int64)v11->FreeAdapterChannel | 0x20);
            v11 = (struct _DMA_OPERATIONS *)v11->PutDmaAdapter;
          }
        }
        DmaOperations = (int)DmaAdapter[38].DmaOperations;
      }
      else
      {
        DmaAdapter[14].DmaOperations = 0LL;
        *(_DWORD *)&DmaAdapter[15].Version = 0;
      }
      LODWORD(DmaAdapter[38].DmaOperations) = DmaOperations + 1;
      goto LABEL_25;
    case 3:
LABEL_25:
      if ( *(_DWORD *)&DmaAdapter[32].Version != 3 )
        goto LABEL_29;
      p_FreeCommonBuffer = &DmaAdapter[14].DmaOperations->FreeCommonBuffer;
      if ( (int)sub_14042A5E0(
                  DmaAdapter[31].DmaOperations->FlushAdapterBuffers,
                  HIDWORD(v5->AllocateCommonBuffer) & 0xFFFFF000) >= 0 )
        goto LABEL_29;
      if ( sub_140504FE8((__int64)DmaAdapter, &DmaAdapter[37].Version, (BYTE4(v5->AllocateCommonBuffer) & 1) == 0) )
      {
        *p_FreeCommonBuffer = (PFREE_COMMON_BUFFER)DmaAdapter[34].DmaOperations;
LABEL_29:
        DmaOperations = ++LODWORD(DmaAdapter[38].DmaOperations);
        goto LABEL_30;
      }
LABEL_16:
      AllocateCommonBuffer_high = HIDWORD(v5->AllocateCommonBuffer);
      if ( (AllocateCommonBuffer_high & 1) != 0
        || (AllocateCommonBuffer_high & 2) != 0
        && ((__int64)v5[-1].AllocateCommonBufferWithBounds & 2) != 0
        && (sub_140504BA4((__int64)DmaAdapter, &DmaAdapter[37].Version)
         || sub_140504A84((__int64)DmaAdapter)
         || (unsigned __int8)sub_140519B94(DmaAdapter)) )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        IoFreeAdapterChannel(DmaAdapter);
      }
      return 0;
  }
  if ( DmaOperations != 4 )
    return 0;
LABEL_30:
  if ( (HIDWORD(v5->AllocateCommonBuffer) & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&v5[-1].AllocateCommonBufferWithBounds, 1u);
    DmaOperations = (int)DmaAdapter[38].DmaOperations;
  }
  LODWORD(DmaAdapter[38].DmaOperations) = DmaOperations + 1;
  if ( (HIDWORD(v5->AllocateCommonBuffer) & 2) != 0 )
    *(_QWORD *)&DmaAdapter[22].Version = (char *)v5 - 16;
  if ( v5->FreeCommonBuffer )
  {
    v15 = sub_14042A5E0(v5->FreeAdapterChannel, v5->FreeMapRegisters);
    if ( a3 )
      *a3 = v15;
    if ( a2 )
      sub_1405116C0((__int64)DmaAdapter, v15);
  }
  return 1;
}

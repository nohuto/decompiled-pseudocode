/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x1C0027C50
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0027964 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00B4834 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 */

void __stdcall NdisMFreeNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PSCATTER_GATHER_LIST pSGL,
        PNET_BUFFER NetBuffer)
{
  PNET_BUFFER v4; // rbx
  unsigned __int16 Reserved; // ax
  void *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  struct _MDL *v9; // rsi
  char *v10; // rdi
  unsigned __int64 CurrentMdlOffset; // r8
  unsigned __int64 DataLength; // r9
  struct _MDL *CurrentMdl; // rdx
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = NetBuffer;
  LOBYTE(NetBuffer) = (NetBuffer->Reserved & 4) != 0;
  (*(void (__fastcall **)(_QWORD, PSCATTER_GATHER_LIST, PNET_BUFFER))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5)
                                                                                + 8LL)
                                                                    + 96LL))(
    *((_QWORD *)NdisMiniportDmaHandle + 5),
    pSGL,
    NetBuffer);
  Reserved = v4->Reserved;
  if ( (Reserved & 1) != 0 )
  {
    v6 = v4->NdisReserved[0];
    v4->NdisReserved[0] = 0LL;
    v4->Reserved = Reserved & 0xFFFE;
    v7 = *((_QWORD *)NdisMiniportDmaHandle + 10);
    v8 = v7 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7);
    if ( !*(_BYTE *)(v8 + 176) )
      PplpLazyInitializeLookasideList(v7, v8 + 64);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v8 + 64), v6);
  }
  else if ( (Reserved & 2) != 0 )
  {
    v9 = (struct _MDL *)v4->NdisReserved[0];
    v10 = (char *)v9->StartVa + v9->ByteOffset;
    if ( (Reserved & 4) == 0 )
    {
      CurrentMdlOffset = v4->CurrentMdlOffset;
      DataLength = v4->DataLength;
      CurrentMdl = v4->CurrentMdl;
      v14 = 0LL;
      RtlCopyBufferToMdl(&v10[48 * CurrentMdlOffset], CurrentMdl, CurrentMdlOffset, DataLength, &v14);
    }
    v4->Reserved &= ~2u;
    v4->NdisReserved[0] = 0LL;
    IoFreeMdl(v9);
    ExFreePoolWithTag(v10, 0);
  }
  v4->Reserved &= ~4u;
}

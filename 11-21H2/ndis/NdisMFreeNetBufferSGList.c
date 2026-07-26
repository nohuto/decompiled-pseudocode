/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x1C0006540
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C002957C (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00AE978 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 */

void __stdcall NdisMFreeNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PSCATTER_GATHER_LIST pSGL,
        PNET_BUFFER NetBuffer)
{
  PNET_BUFFER v4; // rbx
  unsigned __int16 Reserved; // ax
  _SLIST_ENTRY *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  struct _MDL *v10; // rsi
  char *v11; // rdi
  unsigned __int64 CurrentMdlOffset; // r8
  unsigned __int64 DataLength; // r9
  struct _MDL *CurrentMdl; // rdx
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

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
    v6 = (_SLIST_ENTRY *)v4->NdisReserved[0];
    v4->NdisReserved[0] = 0LL;
    v4->Reserved = Reserved & 0xFFFE;
    v7 = *((_QWORD *)NdisMiniportDmaHandle + 10);
    v8 = (unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7;
    v9 = v8 + v7 + 64;
    if ( !*(_BYTE *)(v9 + 112) )
      PplpLazyInitializeLookasideList(v7, v8 + v7 + 64);
    ++*(_DWORD *)(v9 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v9) >= *(_WORD *)(v9 + 16) )
    {
      ++*(_DWORD *)(v9 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, unsigned __int64))(v9 + 56))(v6, v9);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, v6);
    }
  }
  else if ( (Reserved & 2) != 0 )
  {
    v10 = (struct _MDL *)v4->NdisReserved[0];
    v11 = (char *)v10->StartVa + v10->ByteOffset;
    if ( (Reserved & 4) == 0 )
    {
      CurrentMdlOffset = v4->CurrentMdlOffset;
      DataLength = v4->DataLength;
      CurrentMdl = v4->CurrentMdl;
      v15 = 0LL;
      RtlCopyBufferToMdl(&v11[48 * CurrentMdlOffset], CurrentMdl, CurrentMdlOffset, DataLength, &v15);
      Reserved = v4->Reserved;
    }
    v4->Reserved = Reserved & 0xFFFD;
    v4->NdisReserved[0] = 0LL;
    IoFreeMdl(v10);
    ExFreePoolWithTag(v11, 0);
  }
  v4->Reserved &= ~4u;
}

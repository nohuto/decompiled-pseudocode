/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C00277F0
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0027AF4 (PplpLazyInitializeLookasideList.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DCD4 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DD2A (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092378 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00B494C (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // r14
  PVOID v7; // r15
  bool v10; // r13
  __int16 v11; // cx
  unsigned int DataOffset; // ecx
  _MDL *MdlChain; // rdi
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r12d
  char *v17; // rbp
  int v18; // r15d
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  struct _LOOKASIDE_LIST_EX *v22; // rcx
  PVOID v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  struct _MDL *v26; // rbp
  void *Pool2; // rax
  int v28; // edx
  struct _MDL *Mdl; // rax
  int v30; // [rsp+38h] [rbp-80h]
  int v31; // [rsp+38h] [rbp-80h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h] BYREF
  __int64 v34; // [rsp+70h] [rbp-48h]
  int v35; // [rsp+78h] [rbp-40h]
  struct _LOOKASIDE_LIST_EX *Entry; // [rsp+C0h] [rbp+8h]
  PVOID Entrya; // [rsp+C0h] [rbp+8h]
  PVOID Entryb; // [rsp+C0h] [rbp+8h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  v35 = -1;
  v33 = 0LL;
  v11 = 0;
  v34 = 0LL;
  if ( *(_DWORD *)(v6 + 48) || *(_DWORD *)(v6 + 80) )
  {
    v11 = *(_DWORD *)(v6 + 48);
    LODWORD(v34) = *(_DWORD *)(v6 + 48);
    HIDWORD(v34) = *(_DWORD *)(v6 + 80);
    v33 = *(_QWORD *)(v6 + 40);
    if ( !v33 )
    {
      v11 = v34;
      v33 = *(_QWORD *)(v6 + 40);
    }
  }
  if ( (v11 & 0x400) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v33, 0xAuLL, 1uLL);
  if ( (v34 & 0x40000000000LL) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v33, 0xAu);
  if ( *((_QWORD *)NdisMiniportDmaHandle + 2) )
    ndisBugCheckEx(0x28uLL, 3uLL, 0LL, 0LL);
  DataOffset = NetBuffer->DataOffset;
  MdlChain = NetBuffer->MdlChain;
  if ( !MdlChain )
    return -1073741823;
  for ( i = MdlChain->ByteCount; DataOffset >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    DataOffset -= i;
  }
  DataLength = NetBuffer->DataLength;
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
  v16 = DataLength + DataOffset;
  if ( DataLength + DataOffset < DataLength )
    return -1073676268;
  v17 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
  if ( v10 )
    NetBuffer->Reserved |= 4u;
  if ( ScatterGatherListBuffer )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, bool, PVOID, ULONG))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 5),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 6),
            v7,
            v10,
            ScatterGatherListBuffer,
            ScatterGatherListBufferSize);
    if ( v18 >= 0 )
      goto LABEL_15;
    v7 = Context;
  }
  v20 = *((_QWORD *)NdisMiniportDmaHandle + 10);
  v21 = (unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7;
  v22 = (struct _LOOKASIDE_LIST_EX *)(v21 + v20 + 64);
  Entry = v22;
  if ( !LOBYTE(v22[1].L.Depth) )
  {
    PplpLazyInitializeLookasideList(v20, v21 + v20 + 64);
    v22 = Entry;
  }
  v23 = ExAllocateFromLookasideListEx(v22);
  Entrya = v23;
  if ( v23 )
  {
    NetBuffer->Reserved |= 1u;
    NetBuffer->NdisReserved[0] = v23;
    LOBYTE(v30) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, PVOID, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 5),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 6),
            v7,
            v30,
            v23,
            *((_DWORD *)NdisMiniportDmaHandle + 18));
    if ( v18 >= 0 )
      goto LABEL_15;
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~1u;
    v24 = *((_QWORD *)NdisMiniportDmaHandle + 10);
    v25 = v24 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7);
    if ( !*(_BYTE *)(v25 + 176) )
      PplpLazyInitializeLookasideList(v24, v25 + 64);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v25 + 64), Entrya);
  }
  LOBYTE(v30) = v10;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL)
                                                                                             + 88LL))(
          *((_QWORD *)NdisMiniportDmaHandle + 5),
          *(_QWORD *)(v6 + 3824),
          MdlChain,
          v17,
          v16,
          *((_QWORD *)NdisMiniportDmaHandle + 6),
          Context,
          v30);
  if ( v18 < 0 )
  {
    v26 = 0LL;
    v32 = 0LL;
    Pool2 = (void *)ExAllocatePool2(66LL, v16, 1735607374);
    Entryb = Pool2;
    if ( Pool2 )
    {
      Mdl = IoAllocateMdl(Pool2, v16, 0, 0, 0LL);
      v26 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
        v26->Next = 0LL;
        if ( !v10 || (v18 = RtlCopyMdlToBuffer(MdlChain, 0LL, Entryb, v16, &v32), v18 >= 0) )
        {
          NetBuffer->Reserved |= 2u;
          NetBuffer->NdisReserved[0] = v26;
          LOBYTE(v31) = v10;
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PVOID, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 88LL))(
                  *((_QWORD *)NdisMiniportDmaHandle + 5),
                  *(_QWORD *)(v6 + 3824),
                  v26,
                  Entryb,
                  v16,
                  *((_QWORD *)NdisMiniportDmaHandle + 6),
                  Context,
                  v31);
          if ( v18 >= 0 )
            goto LABEL_15;
        }
      }
      else
      {
        v18 = -1073741670;
      }
      Pool2 = Entryb;
    }
    else
    {
      v18 = -1073741670;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v28,
        3,
        49,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        v18);
      Pool2 = Entryb;
    }
    if ( v26 )
    {
      IoFreeMdl(v26);
      Pool2 = Entryb;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~2u;
    NetBuffer->Reserved &= ~4u;
  }
LABEL_15:
  if ( (v34 & 0x40000000000LL) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v33, 0xAu, 0x17uLL);
  return v18;
}

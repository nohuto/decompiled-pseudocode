/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C0004E00
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C002957C (PplpLazyInitializeLookasideList.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00AEA70 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // rbp
  PVOID v7; // r15
  bool v10; // r13
  __int16 v11; // cx
  unsigned int DataOffset; // ecx
  _MDL *MdlChain; // rdi
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r12d
  char *v17; // r14
  int v18; // r15d
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  _SLIST_ENTRY *v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r9
  struct _MDL *v28; // r14
  _SLIST_ENTRY *Pool2; // rax
  int v30; // edx
  struct _MDL *Mdl; // rax
  int v32; // [rsp+38h] [rbp-80h]
  int v33; // [rsp+38h] [rbp-80h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h] BYREF
  __int64 v35; // [rsp+68h] [rbp-50h] BYREF
  __int64 v36; // [rsp+70h] [rbp-48h]
  unsigned int Number; // [rsp+78h] [rbp-40h]
  _SLIST_ENTRY *ListEntry; // [rsp+C0h] [rbp+8h]
  PSLIST_ENTRY ListEntrya; // [rsp+C0h] [rbp+8h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  Number = -1;
  v35 = 0LL;
  v11 = 0;
  v36 = 0LL;
  if ( *(_DWORD *)(v6 + 48) || *(_DWORD *)(v6 + 80) )
  {
    v11 = *(_DWORD *)(v6 + 48);
    LODWORD(v36) = *(_DWORD *)(v6 + 48);
    HIDWORD(v36) = *(_DWORD *)(v6 + 80);
    v35 = *(_QWORD *)(v6 + 40);
    if ( !v35 )
    {
      v11 = v36;
      v35 = *(_QWORD *)(v6 + 40);
    }
  }
  if ( (v11 & 0x400) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v35 + ndisPcwPerCpuDataStride * Number + 80);
  }
  if ( (v36 & 0x40000000000LL) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v35, 0xAu);
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
  v22 = v21 + v20 + 64;
  v34 = v22;
  if ( !*(_BYTE *)(v22 + 112) )
  {
    PplpLazyInitializeLookasideList(v20, v21 + v20 + 64);
    v22 = v34;
  }
  ++*(_DWORD *)(v22 + 20);
  ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
  v23 = ListEntry;
  if ( ListEntry
    || (v27 = v34,
        ++*(_DWORD *)(v34 + 24),
        ListEntry = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(v27 + 48))(
                                      *(unsigned int *)(v27 + 36),
                                      *(unsigned int *)(v27 + 44),
                                      *(unsigned int *)(v27 + 40),
                                      v27),
        (v23 = ListEntry) != 0LL) )
  {
    NetBuffer->Reserved |= 1u;
    NetBuffer->NdisReserved[0] = v23;
    LOBYTE(v32) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 5),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 6),
            v7,
            v32,
            v23,
            *((_DWORD *)NdisMiniportDmaHandle + 18));
    if ( v18 >= 0 )
      goto LABEL_15;
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~1u;
    v24 = *((_QWORD *)NdisMiniportDmaHandle + 10);
    v25 = (unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7;
    v26 = v25 + v24 + 64;
    if ( !*(_BYTE *)(v26 + 112) )
      PplpLazyInitializeLookasideList(v24, v25 + v24 + 64);
    ++*(_DWORD *)(v26 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v26) >= *(_WORD *)(v26 + 16) )
    {
      ++*(_DWORD *)(v26 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, unsigned __int64))(v26 + 56))(ListEntry, v26);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v26, ListEntry);
    }
  }
  LOBYTE(v32) = v10;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL)
                                                                                             + 88LL))(
          *((_QWORD *)NdisMiniportDmaHandle + 5),
          *(_QWORD *)(v6 + 3824),
          MdlChain,
          v17,
          v16,
          *((_QWORD *)NdisMiniportDmaHandle + 6),
          Context,
          v32);
  if ( v18 < 0 )
  {
    v28 = 0LL;
    v34 = 0LL;
    Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v16, 1735607374LL);
    ListEntrya = Pool2;
    if ( Pool2 )
    {
      Mdl = IoAllocateMdl(Pool2, v16, 0, 0, 0LL);
      v28 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
        v28->Next = 0LL;
        if ( !v10 || (v18 = RtlCopyMdlToBuffer(MdlChain, 0LL, ListEntrya, v16, &v34), v18 >= 0) )
        {
          NetBuffer->Reserved |= 2u;
          NetBuffer->NdisReserved[0] = v28;
          LOBYTE(v33) = v10;
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PSLIST_ENTRY, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 88LL))(
                  *((_QWORD *)NdisMiniportDmaHandle + 5),
                  *(_QWORD *)(v6 + 3824),
                  v28,
                  ListEntrya,
                  v16,
                  *((_QWORD *)NdisMiniportDmaHandle + 6),
                  Context,
                  v33);
          if ( v18 >= 0 )
            goto LABEL_15;
        }
      }
      else
      {
        v18 = -1073741670;
      }
      Pool2 = ListEntrya;
    }
    else
    {
      v18 = -1073741670;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v30,
        3,
        44,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
        v18);
      Pool2 = ListEntrya;
    }
    if ( v28 )
    {
      IoFreeMdl(v28);
      Pool2 = ListEntrya;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~2u;
    NetBuffer->Reserved &= ~4u;
  }
LABEL_15:
  if ( (v36 & 0x40000000000LL) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v35, 0xAu, 0x17uLL);
  return v18;
}

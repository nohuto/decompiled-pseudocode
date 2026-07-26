/*
 * XREFs of NdisFreeNetBuffer @ 0x1C0005C90
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C0011B90 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00B44A0 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x1C00024CC (ndisPplLazyInitializeLookaside.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  char *NdisPoolHandle; // rbp
  _MDL *MdlChain; // rcx
  unsigned __int64 v4; // rax
  char *v5; // rdi
  _SLIST_HEADER *v6; // rsi
  _SLIST_HEADER *v7; // rcx

  NdisPoolHandle = (char *)NetBuffer->NdisPoolHandle;
  if ( (*((_DWORD *)NdisPoolHandle + 20) & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  if ( (*((_DWORD *)NdisPoolHandle + 1) & 1) != 0 )
  {
    if ( (unsigned __int64)NetBuffer < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)NetBuffer, 0LL);
    ExFreePoolWithTag(&NetBuffer[-1].MiniportReserved[2], 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v4 = (unsigned __int64)LODWORD(NetBuffer[-1].SharedMemoryInfo) << 8;
      v5 = &NdisPoolHandle[v4 + 384];
      if ( !v5[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)&NdisPoolHandle[v4 + 384], (__int64)(NdisPoolHandle + 128));
      if ( LODWORD(NetBuffer[-1].SharedMemoryInfo) == KeGetPcr()->Prcb.Number )
        v6 = (_SLIST_HEADER *)*((_QWORD *)v5 + 24);
      else
        v6 = (_SLIST_HEADER *)*((_QWORD *)v5 + 25);
      ++*((_DWORD *)v5 + 7);
      if ( ExQueryDepthSList(v6) < *((_WORD *)v5 + 8) )
      {
        v7 = v6;
        goto LABEL_14;
      }
      ++*((_DWORD *)v5 + 8);
    }
    ++*((_DWORD *)NdisPoolHandle + 39);
    if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) < *((_WORD *)NdisPoolHandle + 72) )
    {
      v7 = (_SLIST_HEADER *)(NdisPoolHandle + 128);
LABEL_14:
      ExpInterlockedPushEntrySList(v7, (PSLIST_ENTRY)NetBuffer);
      return;
    }
    ++*((_DWORD *)NdisPoolHandle + 40);
    (*((void (__fastcall **)(PNET_BUFFER, char *))NdisPoolHandle + 23))(NetBuffer, NdisPoolHandle + 128);
  }
}

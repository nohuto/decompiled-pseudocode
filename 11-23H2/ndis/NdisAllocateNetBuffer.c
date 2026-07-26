/*
 * XREFs of NdisAllocateNetBuffer @ 0x1C0001740
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0001180 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00B3D50 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0001828 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBuffer(NDIS_HANDLE PoolHandle, PMDL MdlChain, ULONG DataOffset, SIZE_T DataLength)
{
  unsigned int v4; // r14d
  struct _NET_BUFFER *v8; // rbx
  struct _NET_BUFFER *v9; // rax
  ULONG v10; // ecx
  PMDL i; // rax
  ULONG ByteCount; // edx
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = DataLength;
  v14 = 0;
  v8 = 0LL;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 20) & 1) != 0 )
    {
      DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", PoolHandle);
    }
    else
    {
      v9 = (struct _NET_BUFFER *)ndisPplAllocate((struct PPL_POOL_HANDLE__ *)PoolHandle, (unsigned int)MdlChain, &v14);
      v8 = v9;
      if ( v9 )
      {
        v9->Link.Region = 0LL;
        v10 = DataOffset;
        v9->CurrentMdlOffset = 0;
        v9->MdlChain = 0LL;
        v9->DataOffset = 0;
        v9->DataLength = 0;
        v9->NdisReserved[1] = 0LL;
        v9->NdisReserved[0] = 0LL;
        v9->MiniportReserved[1] = 0LL;
        v9->MiniportReserved[0] = 0LL;
        v9->Link.Alignment = 0LL;
        v9->NdisPoolHandle = PoolHandle;
        *(_DWORD *)&v9->ChecksumBias = 0;
        v9->SharedMemoryInfo = 0LL;
        for ( i = MdlChain; i; v10 -= ByteCount )
        {
          ByteCount = i->ByteCount;
          if ( v10 < ByteCount )
            break;
          i = i->Next;
        }
        v8->MdlChain = MdlChain;
        v8->DataOffset = DataOffset;
        v8->DataLength = v4;
        v8->Link.Region = (unsigned __int64)i;
        v8->CurrentMdlOffset = v10;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v8;
}

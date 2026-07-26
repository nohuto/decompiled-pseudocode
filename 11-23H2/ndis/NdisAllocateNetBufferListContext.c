/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x1C0027FA0
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1C0001D40 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0002160 (NdisAllocateNetBufferAndNetBufferList.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  int v4; // ebx
  int v6; // esi
  _DWORD *NdisPoolHandle; // rax
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  _NET_BUFFER_LIST_CONTEXT *v10; // r8
  int v11; // edx
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  unsigned __int16 Offset; // ax
  unsigned __int16 v16; // r14
  int v17; // r8d
  _NET_BUFFER_LIST_CONTEXT *Pool2; // rax

  v4 = ContextSize;
  v6 = ContextBackFill;
  if ( !ContextSize )
    return 0;
  if ( (ContextSize & 7) != 0 || (ContextBackFill & 7) != 0 )
    return -1073676267;
  NdisPoolHandle = NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  v10 = (_NET_BUFFER_LIST_CONTEXT *)NetBufferList->NetBufferListInfo[28];
  v11 = NdisPoolHandle[11];
  if ( (v11 & 2) == 0 )
    goto LABEL_9;
  v12 = 384LL;
  if ( (v11 & 1) != 0 )
    v12 = 560LL;
  if ( Context != (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v12) || Context->Offset < (unsigned __int16)v4 )
  {
LABEL_9:
    v13 = LOWORD(NetBufferList->NdisReserved[1]) + v4;
    LOWORD(NetBufferList->NdisReserved[1]) = v13;
    if ( v13 <= ndisMaxCachedNblContextSize )
    {
      if ( v13 <= WORD1(NetBufferList->NdisReserved[1]) )
        v13 = WORD1(NetBufferList->NdisReserved[1]);
      WORD1(NetBufferList->NdisReserved[1]) = v13;
    }
  }
  if ( Context )
  {
    Offset = Context->Offset;
    if ( Offset >= (unsigned __int16)v4 )
    {
      Context->Offset = Offset - v4;
      return 0;
    }
  }
  if ( v10 && v10->Size >= (unsigned __int16)v4 )
  {
    v10->Offset -= v4;
    v10->Next = NetBufferList->Context;
    NetBufferList->Context = v10;
    NetBufferList->NetBufferListInfo[28] = 0LL;
    return 0;
  }
  v16 = v6 + v4;
  if ( LOWORD(NetBufferList->NdisReserved[1]) <= ndisMaxCachedNblContextSize )
  {
    if ( v10 )
    {
      NetBufferList->NetBufferListInfo[28] = 0LL;
      ExFreePoolWithTag(v10, 0);
    }
    v17 = LOWORD(NetBufferList->NdisReserved[1]);
    if ( v16 <= v4 + WORD1(NetBufferList->NdisReserved[1]) - v17 )
      v16 = v4 + WORD1(NetBufferList->NdisReserved[1]) - v17;
    if ( v16 > (unsigned int)(v4 + v6) )
      PoolTag = 1668170830;
  }
  Pool2 = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePool2(64LL, v16 + 16LL, PoolTag);
  if ( Pool2 )
  {
    Pool2->Size = v16;
    Pool2->Offset = v16 - v4;
    Pool2->Next = NetBufferList->Context;
    NetBufferList->Context = Pool2;
    return 0;
  }
  LOWORD(NetBufferList->NdisReserved[1]) -= v4;
  return -1073741670;
}

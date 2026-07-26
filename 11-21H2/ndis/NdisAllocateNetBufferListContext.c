/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x1C003A9D0
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1C0003CA0 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 * Callees:
 *     ndisIsCurrentNblContextBlockPreallocated @ 0x1C003A998 (ndisIsCurrentNblContextBlockPreallocated.c)
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  int v4; // edi
  int v5; // r14d
  __int64 v9; // rcx
  _NET_BUFFER_LIST_CONTEXT *v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v14; // edx
  unsigned __int16 v15; // si
  _NET_BUFFER_LIST_CONTEXT *Pool2; // rax

  v4 = ContextSize;
  v5 = ContextBackFill;
  if ( !ContextSize )
    return 0;
  if ( (ContextSize & 7) != 0 || (ContextBackFill & 7) != 0 )
    return -1073676267;
  if ( !ndisIsCurrentNblContextBlockPreallocated((__int64)NetBufferList) || *(_WORD *)(v11 + 10) < (unsigned __int16)v4 )
  {
    *(_WORD *)(v9 + 56) += v4;
    v12 = *(unsigned __int16 *)(v9 + 56);
    if ( v12 <= ndisMaxCachedNblContextSize )
    {
      if ( (unsigned __int16)v12 <= WORD1(NetBufferList->NdisReserved[1]) )
        LOWORD(v12) = WORD1(NetBufferList->NdisReserved[1]);
      WORD1(NetBufferList->NdisReserved[1]) = v12;
    }
  }
  if ( v11 )
  {
    v13 = *(_WORD *)(v11 + 10);
    if ( v13 >= (unsigned __int16)v4 )
    {
      *(_WORD *)(v11 + 10) = v13 - v4;
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
  v14 = LOWORD(NetBufferList->NdisReserved[1]);
  v15 = v5 + v4;
  if ( v14 <= ndisMaxCachedNblContextSize )
  {
    if ( v10 )
    {
      NetBufferList->NetBufferListInfo[28] = 0LL;
      ExFreePoolWithTag(v10, 0);
      LOWORD(v14) = NetBufferList->NdisReserved[1];
    }
    if ( v15 <= v4 + WORD1(NetBufferList->NdisReserved[1]) - (unsigned __int16)v14 )
      v15 = v4 + WORD1(NetBufferList->NdisReserved[1]) - v14;
    if ( v15 > (unsigned int)(v4 + v5) )
      PoolTag = 1668170830;
  }
  Pool2 = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePool2(64LL, v15 + 16LL, PoolTag);
  if ( Pool2 )
  {
    Pool2->Size = v15;
    Pool2->Offset = v15 - v4;
    Pool2->Next = NetBufferList->Context;
    NetBufferList->Context = Pool2;
    return 0;
  }
  LOWORD(NetBufferList->NdisReserved[1]) -= v4;
  return -1073741670;
}

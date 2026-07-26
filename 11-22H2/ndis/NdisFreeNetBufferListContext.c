/*
 * XREFs of NdisFreeNetBufferListContext @ 0x1C0027FB0
 * Callers:
 *     NdisFreeNetBufferList @ 0x1C0003990 (NdisFreeNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0011B90 (NdisFreeCloneNetBufferList.c)
 * Callees:
 *     ndisIsCurrentNblContextBlockPreallocated @ 0x1C00280A0 (ndisIsCurrentNblContextBlockPreallocated.c)
 */

void __stdcall NdisFreeNetBufferListContext(PNET_BUFFER_LIST NetBufferList, USHORT ContextSize)
{
  USHORT v2; // bx
  __int64 v4; // r9
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // ax
  int v7; // ecx
  int v8; // edx
  unsigned __int16 *v9; // rcx

  if ( ContextSize )
  {
    v2 = ContextSize;
    do
    {
      NetBufferList->Context->Offset += v2;
      if ( (unsigned __int8)ndisIsCurrentNblContextBlockPreallocated(NetBufferList) )
        break;
      if ( v2 >= *(_WORD *)(v4 + 8) )
        v2 = *(_WORD *)(v4 + 8);
      LOWORD(NetBufferList->NdisReserved[1]) -= v2;
      v5 = *(_WORD *)(v4 + 10);
      v6 = *(_WORD *)(v4 + 8);
      if ( v5 < v6 )
        break;
      v2 = v5 - v6;
      NetBufferList->Context = *(_NET_BUFFER_LIST_CONTEXT **)v4;
      v7 = *(unsigned __int16 *)(v4 + 8);
      *(_WORD *)(v4 + 10) = v7;
      *(_QWORD *)v4 = 0LL;
      v8 = LOWORD(NetBufferList->NdisReserved[1]);
      if ( v8 + v7 > ndisMaxCachedNblContextSize )
      {
        ExFreePoolWithTag((PVOID)v4, 0);
      }
      else if ( v7 < WORD1(NetBufferList->NdisReserved[1]) - v8 )
      {
        ExFreePoolWithTag((PVOID)v4, 0);
        v9 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[28];
        if ( v9 )
        {
          if ( v9[4] < WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]) )
          {
            ExFreePoolWithTag(v9, 0);
            NetBufferList->NetBufferListInfo[28] = 0LL;
          }
        }
      }
      else
      {
        NetBufferList->NetBufferListInfo[28] = (void *)v4;
      }
    }
    while ( v2 );
  }
}

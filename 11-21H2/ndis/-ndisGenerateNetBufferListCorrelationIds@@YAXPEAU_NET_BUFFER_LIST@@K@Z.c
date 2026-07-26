/*
 * XREFs of ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1C0003CA0 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0004450 (NdisAllocateCloneNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C003A420 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C003A630 (NdisCopySendNetBufferListInfo.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006E218 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x1C00AE8D8 (ndisGenerateCorrelationIds.c)
 */

void __fastcall ndisGenerateNetBufferListCorrelationIds(struct _NET_BUFFER_LIST *a1, unsigned int a2)
{
  _QWORD *i; // r8
  unsigned int v3; // eax
  unsigned int CorrelationIds; // eax
  _QWORD *v5; // r8
  __int64 v6; // rcx

  if ( (__int64)a1->NetBufferListInfo[13] <= 0 )
  {
    CorrelationIds = ndisGenerateCorrelationIds(a2);
    do
    {
      if ( (__int64)v5[31] <= 0 )
      {
        v6 = CorrelationIds++;
        v5[31] = v6;
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  else
  {
    for ( i = (_QWORD *)a1->Link.Alignment; i; i = (_QWORD *)*i )
    {
      if ( (__int64)i[31] <= 0 )
      {
        v3 = ndisGenerateCorrelationIds(1u);
        i[31] = v3;
      }
    }
  }
}

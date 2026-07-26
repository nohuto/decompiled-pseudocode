/*
 * XREFs of PktMonClientNblLogNdis @ 0x1C0040E3A
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00034C0 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003B00 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0004680 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C0005410 (NdisFSendNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00125A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013730 (NdisMIndicateReceiveNetBufferLists.c)
 *     ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x1C0023700 (--$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ??$ndisIterativeDPInvokeHandlerOnTracker@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAXP6AX0PEAU_NET_BUFFER_LIST@@KK@Z0PEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@@Z @ 0x1C0036D98 (--$ndisIterativeDPInvokeHandlerOnTracker@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAXP6AX0P.c)
 *     ndisCallReceiveHandler @ 0x1C0036E98 (ndisCallReceiveHandler.c)
 *     ??$ndisDataPathExpandStackCallback@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAX@Z @ 0x1C00645A0 (--$ndisDataPathExpandStackCallback@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAX@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C95C0 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C9CF0 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     PktMonClientNblLog @ 0x1C0040D42 (PktMonClientNblLog.c)
 */

void __fastcall PktMonClientNblLogNdis(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-18h]

  if ( byte_1C00F5390 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
        PktMonClientNblLog(a1, a2, *(_DWORD *)(a1 + 32), a4, v5, a4);
    }
  }
}

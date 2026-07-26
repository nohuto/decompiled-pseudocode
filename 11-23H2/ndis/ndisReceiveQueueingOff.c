/*
 * XREFs of ndisReceiveQueueingOff @ 0x1C00AB878
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0003574 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A99C4 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C00ABAA4 (ndisTracePeriodicRcvOnOff.c)
 */

bool __fastcall ndisReceiveQueueingOff(__int64 a1)
{
  char v2; // al
  void (__fastcall *v3)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rcx
  bool v4; // zf
  bool result; // al

  *(_DWORD *)(a1 + 3168) = 0;
  if ( BYTE2(dword_1C00F76B0) )
    ndisTracePeriodicRcvOnOff(a1, 0LL, 0LL, 0LL);
  v2 = *(_BYTE *)(a1 + 1995);
  v3 = ndisMDispatchReceiveNetBufferListsWithLock;
  v4 = v2 == 0;
  if ( !v2 )
    v3 = ndisMDispatchReceiveNetBufferLists;
  result = v2 == 0;
  *(_BYTE *)(a1 + 2665) = v4;
  *(_QWORD *)(a1 + 2136) = v3;
  *(_QWORD *)(a1 + 2144) = v3;
  --dword_1C00F5220;
  return result;
}

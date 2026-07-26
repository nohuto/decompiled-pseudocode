/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C00AB8C4
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00033E4 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A99A4 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C00ABA84 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2665) = 0;
  *(_QWORD *)(a1 + 2136) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3160) = qword_1C00F5218;
  ++dword_1C00F5220;
  qword_1C00F5218 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3220) == 1) + 1;
  *(_DWORD *)(a1 + 3168) = result;
  if ( BYTE2(dword_1C00F76B0) )
  {
    LOBYTE(a2) = 1;
    return ndisTracePeriodicRcvOnOff(a1, a2, (unsigned int)dword_1C00F5204, qword_1C00F5228);
  }
  return result;
}

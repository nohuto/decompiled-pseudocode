/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C00A521C
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0006474 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A2FBC (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A53D8 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2665) = 0;
  *(_QWORD *)(a1 + 2136) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3160) = qword_1C00EC258;
  ++dword_1C00EC260;
  qword_1C00EC258 = (void *)a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3220) == 1) + 1;
  *(_DWORD *)(a1 + 3168) = result;
  if ( BYTE2(dword_1C00EE5E8) )
  {
    LOBYTE(a2) = 1;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
             a1,
             a2,
             (unsigned int)dword_1C00EC244,
             (LARGE_INTEGER)DueTime.QuadPart);
  }
  return result;
}

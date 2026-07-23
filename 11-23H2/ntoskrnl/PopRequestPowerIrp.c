/*
 * XREFs of PopRequestPowerIrp @ 0x14028F4C0
 * Callers:
 *     PopFxReleasePowerIrp @ 0x14028DFD4 (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x14028F490 (PoRequestPowerIrp.c)
 *     PopScanIdleList @ 0x14032CBA0 (PopScanIdleList.c)
 *     DifPoRequestPowerIrpWrapper @ 0x1405EA780 (DifPoRequestPowerIrpWrapper.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PopPepDeviceWaitWake @ 0x14028D214 (PopPepDeviceWaitWake.c)
 *     IofCallDriverSpecifyReturn @ 0x14028D3F0 (IofCallDriverSpecifyReturn.c)
 *     PopFxGetDeviceDStateReason @ 0x14028DD94 (PopFxGetDeviceDStateReason.c)
 *     PopFxNotifyPreDIrpIssue @ 0x14028E148 (PopFxNotifyPreDIrpIssue.c)
 *     PopQueueQuerySetIrp @ 0x14028EC5C (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x14028EE30 (PopDiagTraceIrpStart.c)
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     PopLogNotifyDevice @ 0x14046342A (PopLogNotifyDevice.c)
 *     PopMapInternalActionToIrpAction @ 0x1405876E4 (PopMapInternalActionToIrpAction.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, ULONG a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rbp
  ULONG v9; // ebx
  char v12; // cl
  int v13; // r9d
  __int64 result; // rax
  __int64 v15; // r8
  IRP *v16; // rdi
  __int64 *v17; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // [rsp+60h] [rbp-28h] BYREF

  v28 = 0LL;
  p_Type = (volatile __int64 *)&Irp->Type;
  v9 = a3;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_6;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
  {
    v12 = 1;
  }
  else
  {
LABEL_6:
    v12 = 0;
    if ( !a2 )
    {
      v13 = 0;
      goto LABEL_8;
    }
  }
  v13 = 1;
LABEL_8:
  LOBYTE(a3) = a2;
  result = PopAllocateIrp(a1, a2, a3, v13, v9, v12, a6, a4, a5, (__int64)&Irp, (__int64)&v28);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v16 = Irp;
    if ( Irp )
    {
      v17 = (__int64 *)v28;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = v17;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v16);
        v16 = Irp;
        v17 = (__int64 *)v28;
      }
      v20 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v20[-1].Parameters.Create.Options = 1;
        v20[-1].Parameters.Read.ByteOffset.LowPart = v9;
        if ( (_BYTE)PopCurrentBroadcast )
        {
          v27 = v17[25];
          if ( !v27 || (unsigned int)PopFxGetDeviceDStateReason(v27) == 1 )
          {
            LOBYTE(v15) = 1;
            v20[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                   DWORD2(PopCurrentBroadcast),
                                                   WORD2(PopCurrentBroadcast) >> 12,
                                                   v15);
            v20[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
          }
        }
        if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v16);
        v21 = v17[25];
        if ( !v21 || a2 != 2 || PopFxNotifyPreDIrpIssue(v21, (__int64)v16) )
          PopQueueQuerySetIrp(v16);
      }
      else
      {
        v22 = v17[25];
        if ( v22 )
        {
          _m_prefetchw((const void *)(v22 + 32));
          v23 = *(_DWORD *)(v22 + 32);
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 32), v23, v23);
          }
          while ( v24 != v23 );
          v25 = v28;
          v26 = v23 & 1;
          *(_BYTE *)(v28 + 208) = v26;
          v26 ^= 1u;
          *(_BYTE *)(v25 + 209) = v26;
          p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)v17[25];
          if ( v26 )
          {
            PopPepDeviceWaitWake((__int64)p_CurrentStackLocation[7].CurrentStackLocation, 0, v15);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_CurrentStackLocation[30] + 1, 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)&p_CurrentStackLocation[31], 0, 0);
            v17[25] = 0LL;
          }
          v16 = Irp;
        }
        v20[-1].Parameters.Read.Length = v9;
        PopDiagTraceIrpStart((__int64)p_CurrentStackLocation, (__int64)v16);
        IofCallDriverSpecifyReturn(v20[-1].DeviceObject, (ULONG_PTR)v16);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}

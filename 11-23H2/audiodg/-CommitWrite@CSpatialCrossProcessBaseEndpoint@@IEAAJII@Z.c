/*
 * XREFs of ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009D22C
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x1400A0320 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14003B692 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitWrite(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        __int32 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  volatile signed __int32 **v6; // rbp
  unsigned __int32 v7; // edi
  unsigned __int32 State; // eax
  __int64 v9; // r10
  bool i; // zf
  unsigned __int32 v11; // r11d
  unsigned int v12; // eax
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( a2 > 1 )
  {
    v4 = -2005139345;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitWrite", 933, v4, a4);
    return v4;
  }
  v6 = (volatile signed __int32 **)((char *)this + 576);
  v7 = 16;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 162) + 4LL * a2 + 24), a3);
  State = PingPongState::GetState((__int64)this + 576);
  for ( i = State == 17; ; i = v11 == State )
  {
    v11 = State;
    if ( i )
      break;
    if ( State > 0x10 )
      goto LABEL_8;
    v7 = `PingPongState::CommitWrite'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v6[17], v7, State);
  }
  if ( State <= 0x10 )
    goto LABEL_9;
LABEL_8:
  v7 = 16;
LABEL_9:
  if ( *((_DWORD *)v6 + v7 + 17) == 3 )
  {
    v14 = 1;
    (**(void (__fastcall ***)(__int64, _QWORD, int *))(v9 + 1136))(v9 + 1136, 0LL, &v14);
    v4 = -2005139387;
    goto LABEL_11;
  }
  if ( a3 )
    v12 = *(_DWORD *)(v9 + 152);
  else
    v12 = 0;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v9 + 1296) + 32LL), v12);
  return v4;
}

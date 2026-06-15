/*
 * XREFs of ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140091E80
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140091D28 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140092168 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x1400929C4 (-Log@-$LogarithmicLogger@$1-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0-HHIDPPJO@@@QEAAXPEBD.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  volatile signed __int32 **v2; // rsi
  unsigned int v4; // ebx
  unsigned __int32 State; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int32 v9; // r11d
  bool i; // zf
  unsigned __int32 v11; // r10d
  unsigned int v12; // ecx
  unsigned __int32 v13; // eax
  bool j; // zf
  unsigned __int32 v15; // r10d
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)((char *)this + 576);
  v4 = 0;
  State = PingPongState::GetState((char *)this + 576);
  for ( i = State == 17; ; i = v11 == State )
  {
    v11 = State;
    if ( i )
      break;
    if ( State > 0x10 )
      goto LABEL_6;
    v7 = State;
    v9 = `PingPongState::LockForRead'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v2[17], v9, State);
  }
  if ( State <= 0x10 )
    goto LABEL_7;
LABEL_6:
  v9 = 16;
LABEL_7:
  v12 = *((_DWORD *)v2 + v9);
  if ( v12 == 3 )
  {
    v17 = 1;
    (**((void (__fastcall ***)(char *, _QWORD, int *))this + 142))((char *)this + 1136, 0LL, &v17);
    v4 = -2005139387;
    v13 = PingPongState::GetState(v2);
    for ( j = v13 == 17; ; j = v15 == v13 )
    {
      v15 = v13;
      if ( j || v13 > 0x10 )
        break;
      v8 = v13;
      v7 = (unsigned int)`PingPongState::Reset'::`2'::nextState[v13];
      v13 = _InterlockedCompareExchange(v2[17], v7, v13);
    }
  }
  else
  {
    if ( v12 != 2 )
    {
      *a2 = v12;
      return v4;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 162) + 68LL));
    v4 = -2005139358;
  }
  LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
    (char *)this + 1312,
    v7,
    v8,
    v4);
  return v4;
}

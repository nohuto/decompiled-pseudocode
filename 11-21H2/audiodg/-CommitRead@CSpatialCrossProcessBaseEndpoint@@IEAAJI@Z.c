/*
 * XREFs of ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x140091274
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140095770 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140092168 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitRead(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  volatile signed __int32 **v6; // rdi
  unsigned __int32 State; // eax
  unsigned __int32 v8; // r11d
  bool i; // zf
  unsigned __int32 v10; // r10d
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( a2 > 1 )
  {
    v4 = -2147024809;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitRead", 960, v4, a4);
    return v4;
  }
  v6 = (volatile signed __int32 **)((char *)this + 576);
  State = PingPongState::GetState((char *)this + 576);
  for ( i = State == 17; ; i = v10 == State )
  {
    v10 = State;
    if ( i )
      break;
    if ( State > 0x10 )
      goto LABEL_8;
    v8 = `PingPongState::CommitRead'::`2'::nextState[State];
    State = _InterlockedCompareExchange(v6[17], v8, State);
  }
  if ( State <= 0x10 )
    goto LABEL_9;
LABEL_8:
  v8 = 16;
LABEL_9:
  if ( *((_DWORD *)v6 + v8) == 3 )
  {
    v12 = 1;
    (**((void (__fastcall ***)(char *, _QWORD, int *))this + 142))((char *)this + 1136, 0LL, &v12);
    v4 = -2005139387;
    goto LABEL_11;
  }
  return v4;
}

/*
 * XREFs of ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14009EEB4
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009EDB0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14003B692 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ResetStream(CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  unsigned __int32 State; // eax
  __int64 v5; // r10
  unsigned __int32 v6; // r8d

  _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0x10u);
  v1 = *((_QWORD *)this + 162);
  v2 = *(_QWORD *)(v1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 32), 0LL, v2);
  }
  while ( v3 != v2 );
  State = PingPongState::GetState((__int64)this + 576);
  if ( State != 17 )
  {
    do
    {
      if ( State > 0x10 )
        break;
      v6 = State;
      State = _InterlockedCompareExchange(
                *(volatile signed __int32 **)(v5 + 136),
                `PingPongState::Reset'::`2'::nextState[State],
                State);
    }
    while ( v6 != State );
  }
  return 0LL;
}

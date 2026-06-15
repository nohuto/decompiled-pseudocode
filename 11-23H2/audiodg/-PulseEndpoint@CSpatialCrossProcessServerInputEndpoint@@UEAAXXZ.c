/*
 * XREFs of ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14003BD50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14003B692 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x1400A0928 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::PulseEndpoint(CSpatialCrossProcessServerInputEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint *v1; // rbx

  if ( *((_BYTE *)this - 1336) )
  {
    v1 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1432);
    if ( `PingPongState::GetEmptyBufferCount'::`2'::emptyBufferCount_[(unsigned int)PingPongState::GetState((__int64)this - 856)] )
      *((_BYTE *)v1 + 1336) = CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(v1);
  }
  else
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::PulseEndpoint", 0x18Eu, -2005139437);
  }
}

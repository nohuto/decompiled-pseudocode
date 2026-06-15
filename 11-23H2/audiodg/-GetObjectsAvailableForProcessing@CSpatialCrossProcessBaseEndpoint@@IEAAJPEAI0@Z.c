/*
 * XREFs of ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14003B5DC
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400A0A70 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14003B876 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DAF4 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int Index; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // eax

  *a3 = 0;
  *a2 = 0;
  Index = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(this);
  if ( Index < 0 || (Index = CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex(this, a2), Index < 0) )
  {
    if ( Index != -2005139358 )
      goto LABEL_7;
  }
  else
  {
    v7 = *((_DWORD *)this + 72) + *((_DWORD *)this + 73);
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 4LL * *a2 + 24), 0, 0);
    if ( v8 > v7 )
    {
      Index = -2147418113;
LABEL_7:
      SpatialCPTraceLoggingErrorHelper(
        "CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing",
        0x32Au,
        Index);
      return (unsigned int)Index;
    }
    *a3 = v8;
  }
  return (unsigned int)Index;
}

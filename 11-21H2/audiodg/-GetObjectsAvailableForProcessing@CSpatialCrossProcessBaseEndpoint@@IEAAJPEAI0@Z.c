/*
 * XREFs of ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140091D28
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400952F0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140091E80 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x1400930E0 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int Index; // ebx
  __int64 v7; // r9
  unsigned int v8; // r8d
  unsigned int v9; // eax

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
    v8 = *((_DWORD *)this + 72) + *((_DWORD *)this + 73);
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 4LL * *a2 + 24), 0, 0);
    if ( v9 > v8 )
    {
      Index = -2147418113;
LABEL_7:
      SpatialCPTraceLoggingErrorHelper(
        "CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing",
        810,
        (unsigned int)Index,
        v7);
      return (unsigned int)Index;
    }
    *a3 = v9;
  }
  return (unsigned int)Index;
}

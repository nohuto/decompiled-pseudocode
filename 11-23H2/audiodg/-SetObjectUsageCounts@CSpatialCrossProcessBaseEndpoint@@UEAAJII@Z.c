/*
 * XREFs of ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14009EA30
 * Callers:
 *     <none>
 * Callees:
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14009BFBC (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14009D030 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v7; // r9
  unsigned int v8; // ebx

  CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 760),
    a2,
    a3,
    a4);
  if ( a2 + a3 > *((_DWORD *)this + 67) )
  {
    v8 = -2005139346;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts", 1007, 2289827950LL, v7);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 159) + 56LL), __SPAIR64__(a3, a2));
    CSpatialCrossProcessBaseEndpoint::CheckResourceLimits((CSpatialCrossProcessBaseEndpoint *)((char *)this - 24), a3);
    return 0;
  }
  return v8;
}

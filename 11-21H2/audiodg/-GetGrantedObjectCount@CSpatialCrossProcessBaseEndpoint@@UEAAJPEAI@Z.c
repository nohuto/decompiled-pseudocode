/*
 * XREFs of ?GetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x1400919B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 159) + 20LL), 0, 0);
  }
  else
  {
    v4 = -2147467261;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetGrantedObjectCount", 1035, 2147500035LL, a4);
  }
  return v4;
}

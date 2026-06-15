/*
 * XREFs of ?GetAllocatedObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI0@Z @ 0x1400A0A10
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetAllocatedObjectCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    if ( a2 && a3 )
    {
      *a2 = *((_DWORD *)this + 68);
      *a3 = *((_DWORD *)this + 69);
      return v4;
    }
    v4 = -2147467261;
  }
  else
  {
    v4 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetAllocatedObjectCount", 157, v4, a4);
  return v4;
}

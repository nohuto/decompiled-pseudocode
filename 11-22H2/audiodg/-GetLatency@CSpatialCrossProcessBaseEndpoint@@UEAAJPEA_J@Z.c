/*
 * XREFs of ?GetLatency@CSpatialCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x14009D890
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetLatency(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *((_BYTE *)this + 96) )
  {
    if ( a2 )
    {
      *a2 = *((_QWORD *)this + 15);
      return v4;
    }
    v4 = -2147467261;
  }
  else
  {
    v4 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetLatency", 410, v4, a4);
  return v4;
}

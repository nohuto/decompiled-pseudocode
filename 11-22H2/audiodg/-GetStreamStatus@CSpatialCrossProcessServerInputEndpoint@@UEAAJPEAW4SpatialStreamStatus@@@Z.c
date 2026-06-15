/*
 * XREFs of ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14003BD20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA8E (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetStreamStatus(
        CSpatialCrossProcessServerInputEndpoint *this,
        enum SpatialStreamStatus *a2)
{
  unsigned int v2; // ebx
  BOOL v3; // ecx
  BOOL *v4; // r9
  __int64 v5; // r10

  v2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetStreamStatus", 0xB6u, v2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v3 = CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16)) != 0;
  *v4 = v3;
  if ( *(_BYTE *)(v5 + 1489) )
    *v4 = v3 | 2;
  return v2;
}

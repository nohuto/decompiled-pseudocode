/*
 * XREFs of ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x1400A0260
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA4E (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetStreamStatus(
        CSpatialCrossProcessClientOutputEndpoint *this,
        enum SpatialStreamStatus *a2)
{
  unsigned int v2; // ebx
  char IsRunning; // al
  _DWORD *v4; // r9

  v2 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    if ( a2 )
    {
      IsRunning = CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16));
      *v4 = IsRunning != 0;
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetStreamStatus", 271, v2, (__int64)a2);
  return v2;
}

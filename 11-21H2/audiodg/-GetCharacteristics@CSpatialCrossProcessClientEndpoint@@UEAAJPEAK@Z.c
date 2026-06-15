/*
 * XREFs of ?GetCharacteristics@CSpatialCrossProcessClientEndpoint@@UEAAJPEAK@Z @ 0x1400938C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetCharacteristics(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 )
  {
    *a2 = 1;
  }
  else
  {
    v4 = -2147467261;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::GetCharacteristics", 280, 2147500035LL, a4);
  }
  return v4;
}

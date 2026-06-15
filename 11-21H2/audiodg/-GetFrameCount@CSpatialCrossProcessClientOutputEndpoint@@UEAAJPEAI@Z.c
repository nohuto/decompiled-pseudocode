/*
 * XREFs of ?GetFrameCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x140094140
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetFrameCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned __int32 v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ecx

  v2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetFrameCount", 294, v2, (__int64)a2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 160) + 44LL), 0, 0);
  v5 = *((_DWORD *)this + 67);
  v6 = v5;
  if ( v4 < v5 )
    v6 = v4;
  if ( !v6 )
    v6 = v5;
  *a2 = v6;
  return v2;
}

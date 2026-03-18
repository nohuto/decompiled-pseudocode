/*
 * XREFs of EtwpUpdateStackTracing @ 0x1409E5988
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x1406EFB1C (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E581C (EtwpInitializeClassicStackTracing.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(RTL_BITMAP *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // esi

  v6 = 0LL;
  v7 = 0;
  if ( a3 )
  {
    if ( a3 > 0x100 )
      return (unsigned int)-1073741811;
    if ( (a1[51].SizeOfBitMap & 0x80u) == 0 )
    {
      v7 = EtwpInitializeClassicStackTracing((__int64)a1);
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
    else
    {
      RtlClearAllBits(a1 + 62);
    }
    while ( (unsigned int)v6 < a3 )
    {
      _bittestandset((signed __int32 *)a1[62].Buffer, *(_WORD *)(a2 + 4 * v6) & 0x1FFF);
      v6 = (unsigned int)(v6 + 1);
    }
  }
  else if ( (a1[51].SizeOfBitMap & 0x80u) != 0 )
  {
    RtlClearAllBits(a1 + 62);
  }
  return (unsigned int)v7;
}

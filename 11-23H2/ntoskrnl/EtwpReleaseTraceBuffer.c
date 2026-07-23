/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x1402277A8
 * Callers:
 *     EtwpTraceMessageVa @ 0x140227020 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x14036666C (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403835CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14038A610 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x140468782 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FF8A8 (EtwTraceRaw.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpReleaseTraceBuffer(signed __int64 *a1)
{
  signed __int64 v1; // r10
  signed __int64 *v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = *a1;
  v2 = (signed __int64 *)a1[1];
  _m_prefetchw(v2);
  result = *v2;
  if ( (v1 ^ (unsigned __int64)*v2) >= 0xF )
  {
LABEL_4:
    result = *a1;
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12));
  }
  else
  {
    while ( 1 )
    {
      v4 = result;
      result = _InterlockedCompareExchange64(v2, result + 1, result);
      if ( v4 == result )
        break;
      if ( (v1 ^ (unsigned __int64)result) >= 0xF )
        goto LABEL_4;
    }
  }
  return result;
}

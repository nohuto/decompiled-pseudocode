/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x1402276B8
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F30 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x140365E7C (EtwpFailLogging.c)
 *     EtwpLogContextSwapEvent @ 0x140388190 (EtwpLogContextSwapEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14038C540 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140467D22 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FF3C8 (EtwTraceRaw.c)
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

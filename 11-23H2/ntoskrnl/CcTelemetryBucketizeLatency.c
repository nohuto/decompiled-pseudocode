/*
 * XREFs of CcTelemetryBucketizeLatency @ 0x1406F5AB0
 * Callers:
 *     CcCopyReadEx @ 0x140261D60 (CcCopyReadEx.c)
 *     CcCompleteAsyncRead @ 0x1402C1430 (CcCompleteAsyncRead.c)
 *     CcCopyWriteEx @ 0x1402C8D20 (CcCopyWriteEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcTelemetryBucketizeLatency(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *i; // rcx

  result = 0LL;
  for ( i = CcLatencyBuckets; a1 > *i; i += 6 )
  {
    if ( a1 <= i[1] )
    {
      result = (unsigned int)(result + 1);
      goto LABEL_5;
    }
    if ( a1 <= i[2] )
    {
      result = (unsigned int)(result + 2);
      goto LABEL_5;
    }
    if ( a1 <= i[3] )
    {
      result = (unsigned int)(result + 3);
      goto LABEL_5;
    }
    if ( a1 <= i[4] )
    {
      result = (unsigned int)(result + 4);
      goto LABEL_5;
    }
    if ( a1 <= i[5] )
    {
      result = (unsigned int)(result + 5);
LABEL_5:
      if ( (unsigned int)result >= 0xC )
        return result;
      break;
    }
    result = (unsigned int)(result + 6);
    if ( (unsigned int)result >= 0xC )
      return result;
  }
  ++*(_QWORD *)(a2 + 8 * result);
  *(_QWORD *)(a3 + 8 * result) += a1;
  return result;
}

/*
 * XREFs of RtlWakeConditionVariable @ 0x180069BA0
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x180069A78 (TppPoolUpdateTrimmedWorker.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x180069BDC (RtlpWakeConditionVariable.c)
 */

signed __int64 __fastcall RtlWakeConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rdx
  signed __int64 v3; // rtt
  signed __int64 v4; // rtt

  result = *a1;
  while ( result )
  {
    if ( (result & 8) != 0 )
    {
      if ( (result & 7) == 7 )
        return result;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, result + 1, result);
      if ( v4 == result )
        return result;
    }
    else
    {
      v2 = result + 8;
      v3 = result;
      result = _InterlockedCompareExchange64(a1, result + 8, result);
      if ( v3 == result )
        return RtlpWakeConditionVariable(a1, v2, 1LL);
    }
  }
  return result;
}

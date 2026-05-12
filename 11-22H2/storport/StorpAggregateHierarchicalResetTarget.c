/*
 * XREFs of StorpAggregateHierarchicalResetTarget @ 0x1C006B4A8
 * Callers:
 *     RaidUnitResetTarget @ 0x1C0062324 (RaidUnitResetTarget.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall StorpAggregateHierarchicalResetTarget(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int8 result; // al
  __int64 v4; // r9

  result = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v4 = result;
      if ( a3 <= TraceLoggingResetLatencyBuckets[result] )
        break;
      if ( ++result >= 5u )
        return result;
    }
    ++*(_DWORD *)(a1 + 12LL * result + 5088);
    result = a2 & 0x3F;
    if ( (a2 & 0x3F) == 1 )
      ++*(_DWORD *)(a1 + 12 * v4 + 5092);
    else
      *(_BYTE *)(a1 + 12 * v4 + 5096) = a2;
  }
  return result;
}

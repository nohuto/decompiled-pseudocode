/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800FF7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 */

__int64 RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  __int64 result; // rax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}

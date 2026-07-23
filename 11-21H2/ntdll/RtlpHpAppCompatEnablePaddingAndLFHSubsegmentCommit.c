/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800FF7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 */

ULONG RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  ULONG result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}

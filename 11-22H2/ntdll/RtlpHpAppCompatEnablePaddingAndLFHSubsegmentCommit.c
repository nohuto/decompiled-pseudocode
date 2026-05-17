/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800FF4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18004A560 (RtlGetSuiteMask.c)
 */

__int64 RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  __int64 result; // rax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}

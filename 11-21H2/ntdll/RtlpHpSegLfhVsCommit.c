/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180023D10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180023E30 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x180120184 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1)
{
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
    RtlpHpSegGetDescriptorValidateSafe();
  return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
}

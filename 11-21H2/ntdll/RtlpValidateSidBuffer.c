/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800876DC
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180087608 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 >= 8 && a2 >= 4 * (unsigned int)*((unsigned __int8 *)Sid + 1) + 8 )
    return RtlValidSid(Sid);
  else
    return 0;
}

/*
 * XREFs of RtlpValidateSidBuffer @ 0x1407C93D8
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1407C92B8 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140297D50 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x140737590 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}

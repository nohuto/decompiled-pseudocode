/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800876DC
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x180087608 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidateSidBuffer(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= 4 * (unsigned int)(unsigned __int8)a1[1] + 8 && RtlValidSid(a1);
}

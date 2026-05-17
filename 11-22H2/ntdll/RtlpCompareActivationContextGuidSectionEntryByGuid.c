/*
 * XREFs of RtlpCompareActivationContextGuidSectionEntryByGuid @ 0x180002D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlpCompareActivationContextGuidSectionEntryByGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}

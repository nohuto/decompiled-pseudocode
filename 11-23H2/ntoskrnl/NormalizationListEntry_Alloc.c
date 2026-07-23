/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405B5FD0
 * Callers:
 *     RtlpGetNormalization @ 0x1409C8ABC (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 NormalizationListEntry_Alloc()
{
  return ExAllocatePool2(256LL, 144LL, 1164734286LL);
}

/*
 * XREFs of RtlNumberOfClearBits @ 0x140293540
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140AA2DBC (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABD010 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFindAllSharedExports @ 0x140ADB834 (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140ADBE94 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140293570 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}

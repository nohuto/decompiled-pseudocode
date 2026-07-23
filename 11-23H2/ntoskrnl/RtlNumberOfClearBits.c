/*
 * XREFs of RtlNumberOfClearBits @ 0x1402937D0
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140AA2C2C (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     ViThunkCreateSharedExportInformation @ 0x140ABD000 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkFindAllSharedExports @ 0x140ADB824 (ViThunkFindAllSharedExports.c)
 *     ViThunkReplaceAllSharedExports @ 0x140ADBE84 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140293800 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}

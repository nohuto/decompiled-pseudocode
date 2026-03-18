/*
 * XREFs of MiGetSessionIdForVa @ 0x1402A16D0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiFaultGetFileExtents @ 0x140645E84 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284870 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(__int64 a1, unsigned __int64 a2)
{
  if ( a2 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}

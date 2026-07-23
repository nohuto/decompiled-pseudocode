/*
 * XREFs of MiGetSessionIdForVa @ 0x1402A1960
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14028B700 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     MiFaultGetFileExtents @ 0x1406463D4 (MiFaultGetFileExtents.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetSessionIdForVa(__int64 a1, unsigned __int64 a2)
{
  if ( a2 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}

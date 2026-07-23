/*
 * XREFs of ExRaiseAccessViolation @ 0x140874020
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x1405D9A00 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     NtQueryKey @ 0x1406D6BE0 (NtQueryKey.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     IopValidateQueryInformationParameters @ 0x140725C50 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     NtQuerySymbolicLinkObject @ 0x1407AA7B0 (NtQuerySymbolicLinkObject.c)
 *     NtAlpcQueryInformation @ 0x1407AAED0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}

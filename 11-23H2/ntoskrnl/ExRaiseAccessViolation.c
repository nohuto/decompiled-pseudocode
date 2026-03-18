/*
 * XREFs of ExRaiseAccessViolation @ 0x140873DE0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x1405D9490 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     NtQueryKey @ 0x1406D6BB0 (NtQueryKey.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     IopValidateQueryInformationParameters @ 0x140725A50 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x140729380 (ProbeForWrite.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     NtQuerySymbolicLinkObject @ 0x1407AA5C0 (NtQuerySymbolicLinkObject.c)
 *     NtAlpcQueryInformation @ 0x1407AACE0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}

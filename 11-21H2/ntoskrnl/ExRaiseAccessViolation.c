/*
 * XREFs of ExRaiseAccessViolation @ 0x140A021F0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x140608EA0 (DifExRaiseAccessViolationWrapper.c)
 *     NtAlpcQueryInformation @ 0x14069B200 (NtAlpcQueryInformation.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     IopValidateQueryInformationParameters @ 0x1407B0890 (IopValidateQueryInformationParameters.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     sub_1407E3D20 @ 0x1407E3D20 (sub_1407E3D20.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}

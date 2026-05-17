/*
 * XREFs of WerpProcessId @ 0x18008CD58
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800548C0 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8440 (RtlReportExceptionHelper.c)
 *     WerpWaitForCrashReporting @ 0x1800E9100 (WerpWaitForCrashReporting.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 */

__int64 __fastcall WerpProcessId(void *a1)
{
  NTSTATUS InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}

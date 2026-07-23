/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800E7F18
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E72D0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18009F170 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall WerpSetProcessFaultInformation(void *a1)
{
  int ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  if ( !a1 )
    return -1073741585;
  v3 = 0;
  ProcessInformation = 1;
  return NtSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}

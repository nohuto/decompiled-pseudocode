/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800E7F18
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E72D0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18009F170 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  if ( a1 )
    return NtSetInformationProcess();
  else
    return 3221225711LL;
}

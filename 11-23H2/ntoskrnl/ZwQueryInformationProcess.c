/*
 * XREFs of ZwQueryInformationProcess @ 0x14041B080
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405B1A70 (RtlCheckXfgFailureInformation.c)
 *     DifZwQueryInformationProcessWrapper @ 0x1405F47D0 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671490 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

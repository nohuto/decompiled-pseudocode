/*
 * XREFs of ZwQueryInformationProcess @ 0x14041BA80
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405EE7E0 (RtlCheckXfgFailureInformation.c)
 *     DifZwQueryInformationProcessWrapper @ 0x140624A80 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14064CD50 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

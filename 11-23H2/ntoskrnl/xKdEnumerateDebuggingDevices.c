/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x1403B6E60
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     NtQueryInformationThread @ 0x14079F8C0 (NtQueryInformationThread.c)
 *     HaliQuerySystemInformation @ 0x140A88510 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}

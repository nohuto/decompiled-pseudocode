/*
 * XREFs of WerpIsDebugPortPresent @ 0x1800E9040
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8DDC (WerpBreakIntoDebuggerIfPresent.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 */

__int64 WerpIsDebugPortPresent()
{
  unsigned int v0; // ebx
  __int64 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  ProcessInformation = 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDebugPort, &ProcessInformation, 8u, 0LL) >= 0 )
    return ProcessInformation != 0;
  return v0;
}

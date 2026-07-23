/*
 * XREFs of RtlIsCurrentThread @ 0x180001F70
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A5400 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}

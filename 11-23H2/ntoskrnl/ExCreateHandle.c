/*
 * XREFs of ExCreateHandle @ 0x14073F824
 * Callers:
 *     PsAssignThreadId @ 0x1402BEA9C (PsAssignThreadId.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     ExCreateHandleEx @ 0x140740464 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(int a1, int a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}

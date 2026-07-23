/*
 * XREFs of ExCreateHandle @ 0x14073FA14
 * Callers:
 *     PsAssignThreadId @ 0x1402BED2C (PsAssignThreadId.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     ExCreateHandleEx @ 0x140740654 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(int a1, int a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}

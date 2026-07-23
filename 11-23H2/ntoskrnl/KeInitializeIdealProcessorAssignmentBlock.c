/*
 * XREFs of KeInitializeIdealProcessorAssignmentBlock @ 0x140224790
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     KiInitializeIdleProcess @ 0x140B5EA40 (KiInitializeIdleProcess.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeInitializeIdealProcessorAssignmentBlock(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x118uLL);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 2097184;
  memset((void *)(a1 + 24), 0, 0x100uLL);
  *(_QWORD *)(a1 + 4) = 0LL;
  result = (*(_DWORD *)(a1 + 8) & 0xFFFFF | 0x80100000) - 1;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}

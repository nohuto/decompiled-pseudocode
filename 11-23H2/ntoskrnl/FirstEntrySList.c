/*
 * XREFs of FirstEntrySList @ 0x140428EA0
 * Callers:
 *     MmCreateKernelStack @ 0x1402716A0 (MmCreateKernelStack.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     PopMarkComponentsBootPhase @ 0x140AA360C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall FirstEntrySList(PSLIST_HEADER SListHead)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)SListHead->Region;
  LOBYTE(result) = (unsigned __int8)result & 0xF0;
  return result;
}

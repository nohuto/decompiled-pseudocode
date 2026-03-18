/*
 * XREFs of FirstEntrySList @ 0x1404287E0
 * Callers:
 *     MmCreateKernelStack @ 0x140271580 (MmCreateKernelStack.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     PopMarkComponentsBootPhase @ 0x140AA36CC (PopMarkComponentsBootPhase.c)
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

/*
 * XREFs of KiDeleteKernelShadowStack @ 0x14097458C
 * Callers:
 *     PspDeleteKernelStack @ 0x14035AAB0 (PspDeleteKernelStack.c)
 *     KiFreeProcessorStacks @ 0x14056C40C (KiFreeProcessorStacks.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 * Callees:
 *     MmDeleteKernelShadowStack @ 0x140645B14 (MmDeleteKernelShadowStack.c)
 */

PSLIST_ENTRY __fastcall KiDeleteKernelShadowStack(unsigned __int64 a1, int a2, char a3)
{
  return MmDeleteKernelShadowStack(a1, a2, a3);
}

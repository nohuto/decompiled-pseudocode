/*
 * XREFs of MmDeleteKernelStack @ 0x1403D6820
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x1408717E0 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x140884BE0 (KeFreeCalloutStack.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x14026FB60 (MmDeleteKernelStackEx.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(ULONG_PTR a1, unsigned int a2)
{
  return MmDeleteKernelStackEx(a1, a2, 0LL);
}

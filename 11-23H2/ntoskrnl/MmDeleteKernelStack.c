/*
 * XREFs of MmDeleteKernelStack @ 0x1403D6640
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x1408715A0 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x1408849A0 (KeFreeCalloutStack.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x14026F8D0 (MmDeleteKernelStackEx.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(ULONG_PTR a1, unsigned int a2)
{
  return MmDeleteKernelStackEx(a1, a2, 0LL);
}

/*
 * XREFs of VmUnsecureBackingMemory @ 0x1409DCD20
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x1406B0260 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}

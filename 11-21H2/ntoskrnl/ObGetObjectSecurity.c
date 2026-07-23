/*
 * XREFs of ObGetObjectSecurity @ 0x1406E5110
 * Callers:
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_140618320 @ 0x140618320 (sub_140618320.c)
 * Callees:
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return sub_1407248C0(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}

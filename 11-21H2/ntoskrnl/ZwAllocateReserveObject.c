/*
 * XREFs of ZwAllocateReserveObject @ 0x14041C5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  _disable();
  __readeflags();
  return sub_140433F80(MemoryReserveHandle, ObjectAttributes);
}

/*
 * XREFs of ZwOpenPartition @ 0x14041CC80
 * Callers:
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140559F78 (IopLiveDumpOpenVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PartitionHandle);
}

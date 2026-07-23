/*
 * XREFs of ZwCreateWnfStateName @ 0x14041D180
 * Callers:
 *     sub_14063BE80 @ 0x14063BE80 (sub_14063BE80.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_1406C32B0 @ 0x1406C32B0 (sub_1406C32B0.c)
 *     sub_1406E7694 @ 0x1406E7694 (sub_1406E7694.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return sub_140433F80(StateName, *(_QWORD *)&NameLifetime);
}

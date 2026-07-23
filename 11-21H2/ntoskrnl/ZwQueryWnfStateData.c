/*
 * XREFs of ZwQueryWnfStateData @ 0x14041E4C0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_140923614 @ 0x140923614 (sub_140923614.c)
 *     sub_1409BEEA8 @ 0x1409BEEA8 (sub_1409BEEA8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return sub_140433F80(StateName, TypeId);
}

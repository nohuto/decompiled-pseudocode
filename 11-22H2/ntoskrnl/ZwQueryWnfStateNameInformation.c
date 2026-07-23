/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x14041D480
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1030 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x14093A80C (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}

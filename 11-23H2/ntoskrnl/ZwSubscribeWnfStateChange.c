/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x14041EA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}

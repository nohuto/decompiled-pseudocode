/*
 * XREFs of RtlSubscribeWnfStateChangeNotification @ 0x18005BBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 */

NTSTATUS __cdecl RtlSubscribeWnfStateChangeNotification(
        PVOID *SubscriptionHandle,
        WNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        PWNF_USER_CALLBACK Callback,
        PVOID CallbackContext,
        PCWNF_TYPE_ID TypeId,
        ULONG SerializationGroup,
        ULONG Flags)
{
  return RtlpSubscribeWnfStateChangeNotificationInternal(
           (_DWORD)SubscriptionHandle,
           StateName.Data[0],
           ChangeStamp,
           (_DWORD)Callback,
           (__int64)CallbackContext,
           (__int64)TypeId,
           SerializationGroup,
           4,
           17);
}

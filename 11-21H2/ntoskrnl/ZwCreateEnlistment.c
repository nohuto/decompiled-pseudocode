/*
 * XREFs of ZwCreateEnlistment @ 0x14041CCE0
 * Callers:
 *     sub_14061E3C0 @ 0x14061E3C0 (sub_14061E3C0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE ResourceManagerHandle,
        HANDLE TransactionHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, *(_QWORD *)&DesiredAccess);
}

/*
 * XREFs of ZwOpenEnlistment @ 0x14041CB40
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x1405F16B0 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x1408017A8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}

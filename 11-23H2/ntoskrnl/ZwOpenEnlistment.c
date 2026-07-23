/*
 * XREFs of ZwOpenEnlistment @ 0x14041D590
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x1405F1B90 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x1408013C8 (CmpRecoverEnlistment.c)
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

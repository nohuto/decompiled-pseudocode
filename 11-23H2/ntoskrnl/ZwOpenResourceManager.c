/*
 * XREFs of ZwOpenResourceManager @ 0x14041D3C0
 * Callers:
 *     DifZwOpenResourceManagerWrapper @ 0x1405F2400 (DifZwOpenResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}

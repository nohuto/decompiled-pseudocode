/*
 * XREFs of ZwOpenResourceManager @ 0x14041CD00
 * Callers:
 *     DifZwOpenResourceManagerWrapper @ 0x1405F2490 (DifZwOpenResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}

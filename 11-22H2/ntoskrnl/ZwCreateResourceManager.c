/*
 * XREFs of ZwCreateResourceManager @ 0x14041BF00
 * Callers:
 *     DifZwCreateResourceManagerWrapper @ 0x1405EEC70 (DifZwCreateResourceManagerWrapper.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}

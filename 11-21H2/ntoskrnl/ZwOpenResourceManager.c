/*
 * XREFs of ZwOpenResourceManager @ 0x14041DD80
 * Callers:
 *     sub_1406225D0 @ 0x1406225D0 (sub_1406225D0.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
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
  return sub_140433F80(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}

/*
 * XREFs of ZwCreateResourceManager @ 0x14041CFA0
 * Callers:
 *     sub_14061ECA0 @ 0x14061ECA0 (sub_14061ECA0.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return sub_140433F80(ResourceManagerHandle, *(_QWORD *)&DesiredAccess);
}

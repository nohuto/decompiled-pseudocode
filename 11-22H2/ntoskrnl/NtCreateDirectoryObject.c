/*
 * XREFs of NtCreateDirectoryObject @ 0x1407F1B70
 * Callers:
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x140B6C95C (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x140B6DEE4 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140B6DFD4 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x140B6F884 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1407F1B90 (ObpCreateDirectoryObject.c)
 */

NTSTATUS __cdecl NtCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ObpCreateDirectoryObject(DirectoryHandle, DesiredAccess, ObjectAttributes, 0LL, 0);
}

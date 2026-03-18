/*
 * XREFs of NtCreateDirectoryObject @ 0x1407F15F0
 * Callers:
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     ExpInitializeCallbacks @ 0x140B6B870 (ExpInitializeCallbacks.c)
 *     IopCreateRootDirectories @ 0x140B6CA78 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140B6CB68 (IopCreateUmdfDirectory.c)
 *     CreateSystemRootLink @ 0x140B6E898 (CreateSystemRootLink.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1407F1610 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}

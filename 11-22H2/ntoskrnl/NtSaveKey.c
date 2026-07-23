/*
 * XREFs of NtSaveKey @ 0x140A0EC60
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140A0EC80 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}

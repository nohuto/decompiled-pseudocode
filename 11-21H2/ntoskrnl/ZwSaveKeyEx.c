/*
 * XREFs of ZwSaveKeyEx @ 0x14041E900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, FileHandle);
}

/*
 * XREFs of ZwReplaceKey @ 0x14041E110
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x1405F66B0 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NewFile);
}

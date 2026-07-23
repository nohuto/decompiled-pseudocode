/*
 * XREFs of ZwReplaceKey @ 0x14041E720
 * Callers:
 *     sub_140626420 @ 0x140626420 (sub_140626420.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  _disable();
  __readeflags();
  return sub_140433F80(NewFile, TargetHandle);
}

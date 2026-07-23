/*
 * XREFs of ZwLoadKey @ 0x14041D900
 * Callers:
 *     sub_140620FD0 @ 0x140620FD0 (sub_140620FD0.c)
 *     sub_140813960 @ 0x140813960 (sub_140813960.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return sub_140433F80(TargetKey, SourceFile);
}

/*
 * XREFs of ZwLoadKey @ 0x14041C860
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x1405F0F00 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}

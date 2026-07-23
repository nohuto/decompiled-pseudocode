/*
 * XREFs of ZwLoadKey @ 0x14041D2B0
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x1405F13E0 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140807354 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}

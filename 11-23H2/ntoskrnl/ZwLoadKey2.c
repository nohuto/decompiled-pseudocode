/*
 * XREFs of ZwLoadKey2 @ 0x14041D2D0
 * Callers:
 *     BiLoadHive @ 0x140807354 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}

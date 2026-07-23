/*
 * XREFs of ZwUnloadKey @ 0x14041EBD0
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1405F8640 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14077C0BC (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x140807354 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D84C (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}

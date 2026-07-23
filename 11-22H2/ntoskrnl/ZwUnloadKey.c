/*
 * XREFs of ZwUnloadKey @ 0x14041E180
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1405F8160 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14077C3DC (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x140809604 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D60C (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}

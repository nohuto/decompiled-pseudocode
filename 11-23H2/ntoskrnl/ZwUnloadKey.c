/*
 * XREFs of ZwUnloadKey @ 0x14041E840
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1405F80D0 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14077BECC (VrpUnloadDifferencingHive.c)
 *     BiLoadHive @ 0x140807084 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A5D59C (BiUnloadHiveByName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

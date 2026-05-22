/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C
 * Callers:
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028EA0 (-Destroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetRasterizationScaleOverride@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x180072998 (-SetRasterizationScaleOverride@Visual@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z @ 0x1800844B8 (-SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z.c)
 *     ?SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z @ 0x180086B60 (-SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z.c)
 *     ?SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundation@4@@Z @ 0x180088240 (-SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundati.c)
 *     ?SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x1800B5C70 (-SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Founda.c)
 *     ?SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVCompositionPropertySet@234@@Z @ 0x1801098F0 (-SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVComposition.c)
 *     ?SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@@Z @ 0x18010C288 (-SetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEAAXPEAV-$DynArray@PEAVComposition.c)
 *     ?SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x18010C2C8 (-SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18005B3B4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(CSparseStorage *this, int a2, unsigned int a3, const void *a4)
{
  struct CSparseStorage::DataInfo *SlotForData; // rdi

  SlotForData = CSparseStorage::FindSlotForData(this, a2, a3);
  memcpy_0((char *)SlotForData + 4, a4, a3);
  *(_DWORD *)SlotForData ^= (*(_DWORD *)SlotForData ^ (a2 << 24)) & 0x7F000000;
  *(_DWORD *)(*(_QWORD *)this + 4LL) |= __ROR4__(1, a2);
}

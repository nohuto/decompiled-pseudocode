/*
 * XREFs of ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4
 * Callers:
 *     ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620 (--1CPrimitiveGroup@DirectComposition@@MEAA@XZ.c)
 *     ?Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ @ 0x180009408 (-Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?Destroy@AnimationController@Composition@UI@Windows@@UEAAXXZ @ 0x180009460 (-Destroy@AnimationController@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ @ 0x18000E990 (-Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionGradientBrush@Composition@UI@Windows@@UEAAXXZ @ 0x1800126E0 (-Destroy@CompositionGradientBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ??1CFilterEffect@DirectComposition@@MEAA@XZ @ 0x1800F7ECC (--1CFilterEffect@DirectComposition@@MEAA@XZ.c)
 *     ?RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ @ 0x1800FA8E8 (-RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ.c)
 *     ?Destroy@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x180133660 (-Destroy@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@SceneNode@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x1801421B0 (-Destroy@SceneNode@Scenes@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDevice::RemoveDirtyRebuildableObject(
        DirectComposition::CDevice *this,
        struct DirectComposition::CRebuildableObject *a2)
{
  char v4; // al

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  v4 = (*(__int64 (__fastcall **)(struct DirectComposition::CRebuildableObject *))(*(_QWORD *)a2 + 24LL))(a2);
  DirectComposition::CDevice::CRebuildableObjectList::RemoveObject(
    (DirectComposition::CDevice *)((char *)this + (v4 != 0 ? 8 : 0) + 472),
    a2);
}

/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180094898
 * Callers:
 *     ??$UpdateAnimatedProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBU_D3DCOLORVALUE@@_N1G@Z @ 0x1800947B0 (--$UpdateAnimatedProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Compo.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180147E20 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion.c)
 *     ??$UpdateAnimatedProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DQuaternion@@_N1G@Z @ 0x1801489C8 (--$UpdateAnimatedProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@C.c)
 *     ??$UpdateAnimatedProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector4@@_N1G@Z @ 0x180148B94 (--$UpdateAnimatedProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composi.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector4Value,D2DVector4>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int16 a6)
{
  if ( a5 )
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      1,
      *(const void **)(a2 + 8),
      0x1CuLL);
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      (void *)(*(_QWORD *)(a2 + 8) + 12LL),
      (const void *)a6,
      0x10uLL);
}

/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148DFC
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180148008 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Com.c)
 *     ??$UpdateAnimatedProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector2@@_N1G@Z @ 0x180148AB0 (--$UpdateAnimatedProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composi.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector2Value,D2DVector2>,Windows::UI::Composition::PropertySetUpdaterInfo>(
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
      0x14uLL);
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      (void *)(*(_QWORD *)(a2 + 8) + 12LL),
      (const void *)a6,
      8uLL);
}

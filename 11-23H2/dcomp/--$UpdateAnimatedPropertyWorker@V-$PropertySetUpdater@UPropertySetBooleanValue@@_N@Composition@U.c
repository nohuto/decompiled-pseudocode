/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148C7C
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180092FF8 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI.c)
 *     ??$UpdateAnimatedProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEB_N_N1G@Z @ 0x180148704 (--$UpdateAnimatedProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Win.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetBooleanValue,bool>,Windows::UI::Composition::PropertySetUpdaterInfo>(
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
      0x10uLL);
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      (void *)(*(_QWORD *)(a2 + 8) + 12LL),
      (const void *)a6,
      1uLL);
}

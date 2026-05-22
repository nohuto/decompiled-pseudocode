/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148D7C
 * Callers:
 *     ??$UpdateAnimatedProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DMatrix@@_N1G@Z @ 0x1801488D0 (--$UpdateAnimatedProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Compos.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetMatrix4x4Value,D2DMatrix>,Windows::UI::Composition::PropertySetUpdaterInfo>(
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
      0x4CuLL);
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      (void *)(*(_QWORD *)(a2 + 8) + 12LL),
      (const void *)a6,
      0x40uLL);
}

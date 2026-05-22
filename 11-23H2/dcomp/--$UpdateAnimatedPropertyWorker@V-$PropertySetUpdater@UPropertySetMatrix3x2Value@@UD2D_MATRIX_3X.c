/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148CFC
 * Callers:
 *     ??$UpdateAnimatedProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2D_MATRIX_3X2_F@@_N1G@Z @ 0x1801487E8 (--$UpdateAnimatedProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>,Windows::UI::Composition::PropertySetUpdaterInfo>(
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
      0x24uLL);
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      (void *)(*(_QWORD *)(a2 + 8) + 12LL),
      (const void *)a6,
      0x18uLL);
}

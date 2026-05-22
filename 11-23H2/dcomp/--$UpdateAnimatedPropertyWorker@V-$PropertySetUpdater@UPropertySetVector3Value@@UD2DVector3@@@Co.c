/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180004F7C
 * Callers:
 *     ??$UpdateAnimatedProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector3@@_N1G@Z @ 0x180004998 (--$UpdateAnimatedProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composi.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180004FFC (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Com.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector3Value,D2DVector3>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int16 a6)
{
  unsigned __int64 v8; // [rsp+20h] [rbp-18h]

  if ( a5 )
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      1u,
      *(const void **)(a2 + 8),
      0x18uLL);
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      (void *)(*(_QWORD *)(a2 + 8) + 12LL),
      (const void *)a6,
      0xCu,
      v8);
}

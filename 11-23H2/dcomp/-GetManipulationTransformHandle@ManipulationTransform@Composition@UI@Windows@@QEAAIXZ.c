/*
 * XREFs of ?GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ @ 0x18008244C
 * Callers:
 *     ?GetAnimatablePropertyInfo@ManipulationTransform@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005BBD0 (-GetAnimatablePropertyInfo@ManipulationTransform@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PE.c)
 *     ?SetSharedManipulationTransform@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationTransformPartner@345@@Z @ 0x180081EF0 (-SetSharedManipulationTransform@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionMani.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ManipulationTransform::GetManipulationTransformHandle(
        Windows::UI::Composition::ManipulationTransform *this)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v3; // [rsp+38h] [rbp+10h] BYREF

  DirectComposition::CDevice::GetDeviceAndHandleWorker(*((_QWORD *)this + 18), &v3, &v2);
  return v2;
}

/*
 * XREFs of ??4?$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimationObject@Composition@UI@Windows@@@Z @ 0x18004164C
 * Callers:
 *     ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z @ 0x18003FA48 (-SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__.c)
 *     ??0AnimationObjectInfo@Composition@UI@Windows@@QEAA@PEAUHSTRING__@@PEAUIAnimationObject@123@@Z @ 0x1800415EC (--0AnimationObjectInfo@Composition@UI@Windows@@QEAA@PEAUHSTRING__@@PEAUIAnimationObject@123@@Z.c)
 *     ?RuntimeClassInitialize@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHSTRING__@@PEAUIAnimationObject@345@PEAUICompositionAnimationBase@345@@Z @ 0x180186120 (-RuntimeClassInitialize@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@.c)
 *     ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ @ 0x180186C5C (-GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IAnimationObject>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}

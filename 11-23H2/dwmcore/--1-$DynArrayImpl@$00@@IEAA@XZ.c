/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800999AC
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800985A8 (--1CRenderData@@MEAA@XZ.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1800998EC (--1CExpression@@MEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180099B90 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B381C (--1CComposition@@MEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1802166C0 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x1802166CC (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x18022253C (--1CCompositionCubeMap@@UEAA@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180231BB4 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235808 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x18025BDF0 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 */

void __fastcall DynArrayImpl<1>::~DynArrayImpl<1>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 != a1[1] )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}

/*
 * XREFs of ??0CArithmeticCompositeEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED258
 * Callers:
 *     ?Create@CArithmeticCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionArithmeticCompositeEffect@@@Z @ 0x1800EE184 (-Create@CArithmeticCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompo.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CArithmeticCompositeEffect *__fastcall DirectComposition::CArithmeticCompositeEffect::CArithmeticCompositeEffect(
        DirectComposition::CArithmeticCompositeEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect(
    (DirectComposition::CArithmeticCompositeEffect *)((char *)this + 8),
    a2);
  *(_QWORD *)this = &DirectComposition::CArithmeticCompositeEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CArithmeticCompositeEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CArithmeticCompositeEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

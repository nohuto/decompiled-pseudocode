/*
 * XREFs of ??0CBlendEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED2BC
 * Callers:
 *     ?Create@CBlendEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBlendEffect@@@Z @ 0x1800EE210 (-Create@CBlendEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBlendEff.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CBlendEffect *__fastcall DirectComposition::CBlendEffect::CBlendEffect(
        DirectComposition::CBlendEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect((DirectComposition::CBlendEffect *)((char *)this + 8), a2);
  *(_QWORD *)this = &DirectComposition::CBlendEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

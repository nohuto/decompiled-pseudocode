/*
 * XREFs of ??0CTurbulenceEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED708
 * Callers:
 *     ?Create@CTurbulenceEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTurbulenceEffect@@@Z @ 0x1800EE808 (-Create@CTurbulenceEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTur.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CTurbulenceEffect *__fastcall DirectComposition::CTurbulenceEffect::CTurbulenceEffect(
        DirectComposition::CTurbulenceEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect((DirectComposition::CTurbulenceEffect *)((char *)this + 8), a2);
  *(_QWORD *)this = &DirectComposition::CTurbulenceEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CFloodEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CTurbulenceEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

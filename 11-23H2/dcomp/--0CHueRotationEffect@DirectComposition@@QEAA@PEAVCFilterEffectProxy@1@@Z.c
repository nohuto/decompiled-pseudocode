/*
 * XREFs of ??0CHueRotationEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED514
 * Callers:
 *     ?Create@CHueRotationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionHueRotationEffect@@@Z @ 0x1800EE554 (-Create@CHueRotationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionHu.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CHueRotationEffect *__fastcall DirectComposition::CHueRotationEffect::CHueRotationEffect(
        DirectComposition::CHueRotationEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect((DirectComposition::CHueRotationEffect *)((char *)this + 8), a2);
  *(_QWORD *)this = &DirectComposition::CHueRotationEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CLinearTransferEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CHueRotationEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

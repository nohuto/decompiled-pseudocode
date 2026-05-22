/*
 * XREFs of ??0CAffineTransform2DEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED1F4
 * Callers:
 *     ?Create@CAffineTransform2DEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionAffineTransform2DEffect@@@Z @ 0x1800EE0F8 (-Create@CAffineTransform2DEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDComposi.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CAffineTransform2DEffect *__fastcall DirectComposition::CAffineTransform2DEffect::CAffineTransform2DEffect(
        DirectComposition::CAffineTransform2DEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect((DirectComposition::CAffineTransform2DEffect *)((char *)this + 8), a2);
  *(_QWORD *)this = &DirectComposition::CAffineTransform2DEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CLinearTransferEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CAffineTransform2DEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

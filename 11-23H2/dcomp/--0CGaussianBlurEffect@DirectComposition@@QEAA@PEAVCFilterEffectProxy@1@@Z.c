/*
 * XREFs of ??0CGaussianBlurEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED4B0
 * Callers:
 *     ?Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionGaussianBlurEffect@@@Z @ 0x1800EE4CC (-Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionG.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CGaussianBlurEffect *__fastcall DirectComposition::CGaussianBlurEffect::CGaussianBlurEffect(
        DirectComposition::CGaussianBlurEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect((DirectComposition::CGaussianBlurEffect *)((char *)this + 8), a2);
  *(_QWORD *)this = &DirectComposition::CGaussianBlurEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CLinearTransferEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CGaussianBlurEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

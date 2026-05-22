/*
 * XREFs of ??0CTableTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED6A4
 * Callers:
 *     ?Create@CTableTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTableTransferEffect@@@Z @ 0x1800EE780 (-Create@CTableTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDComposition.c)
 * Callees:
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 */

DirectComposition::CTableTransferEffect *__fastcall DirectComposition::CTableTransferEffect::CTableTransferEffect(
        DirectComposition::CTableTransferEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  DirectComposition::CFilterEffect::CFilterEffect((DirectComposition::CTableTransferEffect *)((char *)this + 8), a2);
  *(_QWORD *)this = &DirectComposition::CTableTransferEffect::`vftable';
  *((_QWORD *)this + 1) = &DirectComposition::CLinearTransferEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 3) = &DirectComposition::CTableTransferEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 4) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 5) = &DirectComposition::CShadowEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  return this;
}

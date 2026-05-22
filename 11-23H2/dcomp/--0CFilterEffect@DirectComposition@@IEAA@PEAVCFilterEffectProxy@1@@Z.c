/*
 * XREFs of ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10
 * Callers:
 *     ??0CAffineTransform2DEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED1F4 (--0CAffineTransform2DEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CArithmeticCompositeEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED258 (--0CArithmeticCompositeEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CBlendEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED2BC (--0CBlendEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CBrightnessEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED320 (--0CBrightnessEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CColorMatrixEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED384 (--0CColorMatrixEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CCompositeEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED3E8 (--0CCompositeEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CFloodEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED44C (--0CFloodEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CGaussianBlurEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED4B0 (--0CGaussianBlurEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CHueRotationEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED514 (--0CHueRotationEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CLinearTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED578 (--0CLinearTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CSaturationEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED5DC (--0CSaturationEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CShadowEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED640 (--0CShadowEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CTableTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED6A4 (--0CTableTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ??0CTurbulenceEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED708 (--0CTurbulenceEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

DirectComposition::CFilterEffect *__fastcall DirectComposition::CFilterEffect::CFilterEffect(
        DirectComposition::CFilterEffect *this,
        struct DirectComposition::CFilterEffectProxy *a2)
{
  CMILRefCountImpl *v4; // rcx
  unsigned __int64 v5; // rbx
  DirectComposition::CFilterEffect *result; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (DirectComposition::CFilterEffect *)((char *)this + 8);
  v8 = 0LL;
  *(_DWORD *)v4 = 0;
  v5 = (unsigned __int64)a2 + 8;
  *((_BYTE *)this + 48) &= 0xFCu;
  *(_QWORD *)this = &DirectComposition::CFilterEffect::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)this + 2) = &DirectComposition::CFilterEffect::`vftable'{for `DirectComposition::IDCompositionFilterEffectInternal'};
  *((_QWORD *)this + 3) = &DirectComposition::CBlendEffect::`vftable'{for `DirectComposition::CDirtyListener'};
  *((_QWORD *)this + 4) = &DirectComposition::CFilterEffect::`vftable'{for `DirectComposition::CRebuildableObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = a2;
  *((_QWORD *)this + 9) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  CMILRefCountImpl::AddReference(v4);
  DirectComposition::CDevice::GetDeviceAndHandleWorker(
    ((v5 & -(__int64)(a2 != 0LL)) - 8) & -(__int64)((v5 & -(__int64)(a2 != 0LL)) != 0),
    &v8,
    &v7);
  result = this;
  *((_QWORD *)this + 7) = v8;
  *((_BYTE *)this + 80) &= ~1u;
  return result;
}

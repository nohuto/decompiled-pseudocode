/*
 * XREFs of ?Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionGaussianBlurEffect@@@Z @ 0x1800EE4CC
 * Callers:
 *     ?ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPEAPEAUIUnknown@@@Z @ 0x1800EDEE0 (-ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPE.c)
 *     ?CreateGaussianBlurEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGaussianBlurEffect@@@Z @ 0x1800EF330 (-CreateGaussianBlurEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGaussianBlurEffect.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CGaussianBlurEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED4B0 (--0CGaussianBlurEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034 (-Initialize@CFilterEffect@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffect::Create(
        struct DirectComposition::CFilterEffectProxy *a1,
        struct IDCompositionGaussianBlurEffect **a2)
{
  DirectComposition::CGaussianBlurEffect *v4; // rax
  DirectComposition::CGaussianBlurEffect *v5; // rax
  struct IDCompositionGaussianBlurEffect *v6; // rbx
  int v7; // edi

  v4 = (DirectComposition::CGaussianBlurEffect *)DefaultHeap::Alloc(0x60uLL);
  if ( v4 && (v5 = DirectComposition::CGaussianBlurEffect::CGaussianBlurEffect(v4, a1), (v6 = v5) != 0LL) )
  {
    v7 = DirectComposition::CFilterEffect::Initialize((DirectComposition::CGaussianBlurEffect *)((char *)v5 + 8));
    if ( v7 < 0 )
      (*(void (__fastcall **)(struct IDCompositionGaussianBlurEffect *))(*(_QWORD *)v6 + 16LL))(v6);
    else
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}

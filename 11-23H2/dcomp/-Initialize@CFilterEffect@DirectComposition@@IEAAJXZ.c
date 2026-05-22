/*
 * XREFs of ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034
 * Callers:
 *     ?Create@CAffineTransform2DEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionAffineTransform2DEffect@@@Z @ 0x1800EE0F8 (-Create@CAffineTransform2DEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDComposi.c)
 *     ?Create@CArithmeticCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionArithmeticCompositeEffect@@@Z @ 0x1800EE184 (-Create@CArithmeticCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompo.c)
 *     ?Create@CBlendEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBlendEffect@@@Z @ 0x1800EE210 (-Create@CBlendEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBlendEff.c)
 *     ?Create@CBrightnessEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBrightnessEffect@@@Z @ 0x1800EE29C (-Create@CBrightnessEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBri.c)
 *     ?Create@CColorMatrixEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionColorMatrixEffect@@@Z @ 0x1800EE328 (-Create@CColorMatrixEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionCo.c)
 *     ?Create@CCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionCompositeEffect@@@Z @ 0x1800EE3B4 (-Create@CCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionComp.c)
 *     ?Create@CFloodEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionFloodEffect@@@Z @ 0x1800EE440 (-Create@CFloodEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionFloodEff.c)
 *     ?Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionGaussianBlurEffect@@@Z @ 0x1800EE4CC (-Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionG.c)
 *     ?Create@CHueRotationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionHueRotationEffect@@@Z @ 0x1800EE554 (-Create@CHueRotationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionHu.c)
 *     ?Create@CLinearTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800EE5E0 (-Create@CLinearTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositio.c)
 *     ?Create@CSaturationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionSaturationEffect@@@Z @ 0x1800EE668 (-Create@CSaturationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionSat.c)
 *     ?Create@CShadowEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionShadowEffect@@@Z @ 0x1800EE6F4 (-Create@CShadowEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionShadowE.c)
 *     ?Create@CTableTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTableTransferEffect@@@Z @ 0x1800EE780 (-Create@CTableTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDComposition.c)
 *     ?Create@CTurbulenceEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTurbulenceEffect@@@Z @ 0x1800EE808 (-Create@CTurbulenceEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTur.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CFilterEffect::Initialize(DirectComposition::CFilterEffect *this)
{
  unsigned int v2; // edi
  SIZE_T v3; // rax
  LPVOID v4; // rax
  unsigned int v5; // eax

  v2 = 0;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CFilterEffect *))(*(_QWORD *)this + 40LL))(this) )
  {
    v3 = saturated_mul(
           (*(unsigned int (__fastcall **)(DirectComposition::CFilterEffect *))(*(_QWORD *)this + 40LL))(this),
           8uLL);
    v4 = DefaultHeap::Alloc(v3);
    *((_QWORD *)this + 9) = v4;
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(DirectComposition::CFilterEffect *))(*(_QWORD *)this + 40LL))(this);
      memset_0(*((void **)this + 9), 0, 8LL * v5);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}

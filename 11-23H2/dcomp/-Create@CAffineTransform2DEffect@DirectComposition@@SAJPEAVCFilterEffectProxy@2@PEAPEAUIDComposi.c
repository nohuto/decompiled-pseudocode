/*
 * XREFs of ?Create@CAffineTransform2DEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionAffineTransform2DEffect@@@Z @ 0x1800EE0F8
 * Callers:
 *     ?CreateAffineTransform2DEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAffineTransform2DEffect@@@Z @ 0x1800EE8A0 (-CreateAffineTransform2DEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAffineTransfo.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CAffineTransform2DEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED1F4 (--0CAffineTransform2DEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034 (-Initialize@CFilterEffect@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::Create(
        struct DirectComposition::CFilterEffectProxy *a1,
        struct IDCompositionAffineTransform2DEffect **a2)
{
  DirectComposition::CAffineTransform2DEffect *v4; // rax
  DirectComposition::CAffineTransform2DEffect *v5; // rax
  struct IDCompositionAffineTransform2DEffect *v6; // rbx
  DirectComposition::CDelayedDestructionObject *v7; // rsi
  unsigned int v8; // edi

  v4 = (DirectComposition::CAffineTransform2DEffect *)DefaultHeap::Alloc(0x60uLL);
  if ( !v4 )
  {
    v6 = 0LL;
LABEL_6:
    v7 = (struct IDCompositionAffineTransform2DEffect *)((char *)v6 + 8);
    v8 = -2147024882;
    if ( !v6 )
      return v8;
LABEL_7:
    DirectComposition::CDelayedDestructionObject::Release(v7);
    return v8;
  }
  v5 = DirectComposition::CAffineTransform2DEffect::CAffineTransform2DEffect(v4, a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_6;
  v7 = (DirectComposition::CAffineTransform2DEffect *)((char *)v5 + 8);
  v8 = DirectComposition::CFilterEffect::Initialize((DirectComposition::CAffineTransform2DEffect *)((char *)v5 + 8));
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_7;
  *a2 = v6;
  return v8;
}

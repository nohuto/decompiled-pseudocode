/*
 * XREFs of ?Create@CColorMatrixEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionColorMatrixEffect@@@Z @ 0x1800EE328
 * Callers:
 *     ?CreateColorMatrixEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionColorMatrixEffect@@@Z @ 0x1800EED80 (-CreateColorMatrixEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionColorMatrixEffect@@.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CColorMatrixEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED384 (--0CColorMatrixEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034 (-Initialize@CFilterEffect@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CColorMatrixEffect::Create(
        struct DirectComposition::CFilterEffectProxy *a1,
        struct IDCompositionColorMatrixEffect **a2)
{
  DirectComposition::CColorMatrixEffect *v4; // rax
  DirectComposition::CColorMatrixEffect *v5; // rax
  struct IDCompositionColorMatrixEffect *v6; // rbx
  DirectComposition::CDelayedDestructionObject *v7; // rsi
  unsigned int v8; // edi

  v4 = (DirectComposition::CColorMatrixEffect *)DefaultHeap::Alloc(0x60uLL);
  if ( !v4 )
  {
    v6 = 0LL;
LABEL_6:
    v7 = (struct IDCompositionColorMatrixEffect *)((char *)v6 + 8);
    v8 = -2147024882;
    if ( !v6 )
      return v8;
LABEL_7:
    DirectComposition::CDelayedDestructionObject::Release(v7);
    return v8;
  }
  v5 = DirectComposition::CColorMatrixEffect::CColorMatrixEffect(v4, a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_6;
  v7 = (DirectComposition::CColorMatrixEffect *)((char *)v5 + 8);
  v8 = DirectComposition::CFilterEffect::Initialize((DirectComposition::CColorMatrixEffect *)((char *)v5 + 8));
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_7;
  *a2 = v6;
  return v8;
}

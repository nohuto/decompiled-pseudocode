/*
 * XREFs of ?Create@CBrightnessEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBrightnessEffect@@@Z @ 0x1800EE29C
 * Callers:
 *     ?CreateBrightnessEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionBrightnessEffect@@@Z @ 0x1800EEB90 (-CreateBrightnessEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionBrightnessEffect@@@Z.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CBrightnessEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED320 (--0CBrightnessEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034 (-Initialize@CFilterEffect@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::Create(
        struct DirectComposition::CFilterEffectProxy *a1,
        struct IDCompositionBrightnessEffect **a2)
{
  DirectComposition::CBrightnessEffect *v4; // rax
  DirectComposition::CBrightnessEffect *v5; // rax
  struct IDCompositionBrightnessEffect *v6; // rbx
  DirectComposition::CDelayedDestructionObject *v7; // rsi
  unsigned int v8; // edi

  v4 = (DirectComposition::CBrightnessEffect *)DefaultHeap::Alloc(0x60uLL);
  if ( !v4 )
  {
    v6 = 0LL;
LABEL_6:
    v7 = (struct IDCompositionBrightnessEffect *)((char *)v6 + 8);
    v8 = -2147024882;
    if ( !v6 )
      return v8;
LABEL_7:
    DirectComposition::CDelayedDestructionObject::Release(v7);
    return v8;
  }
  v5 = DirectComposition::CBrightnessEffect::CBrightnessEffect(v4, a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_6;
  v7 = (DirectComposition::CBrightnessEffect *)((char *)v5 + 8);
  v8 = DirectComposition::CFilterEffect::Initialize((DirectComposition::CBrightnessEffect *)((char *)v5 + 8));
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_7;
  *a2 = v6;
  return v8;
}

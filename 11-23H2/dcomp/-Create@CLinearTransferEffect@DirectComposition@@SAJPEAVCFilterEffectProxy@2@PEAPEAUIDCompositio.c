/*
 * XREFs of ?Create@CLinearTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800EE5E0
 * Callers:
 *     ?CreateLinearTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionLinearTransferEffect@@@Z @ 0x1800EF8C0 (-CreateLinearTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionLinearTransferEf.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CLinearTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED578 (--0CLinearTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034 (-Initialize@CFilterEffect@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::Create(
        struct DirectComposition::CFilterEffectProxy *a1,
        struct IDCompositionLinearTransferEffect **a2)
{
  DirectComposition::CLinearTransferEffect *v4; // rax
  DirectComposition::CLinearTransferEffect *v5; // rax
  struct IDCompositionLinearTransferEffect *v6; // rbx
  int v7; // edi

  v4 = (DirectComposition::CLinearTransferEffect *)DefaultHeap::Alloc(0x60uLL);
  if ( v4 && (v5 = DirectComposition::CLinearTransferEffect::CLinearTransferEffect(v4, a1), (v6 = v5) != 0LL) )
  {
    v7 = DirectComposition::CFilterEffect::Initialize((DirectComposition::CLinearTransferEffect *)((char *)v5 + 8));
    if ( v7 < 0 )
      (*(void (__fastcall **)(struct IDCompositionLinearTransferEffect *))(*(_QWORD *)v6 + 16LL))(v6);
    else
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}

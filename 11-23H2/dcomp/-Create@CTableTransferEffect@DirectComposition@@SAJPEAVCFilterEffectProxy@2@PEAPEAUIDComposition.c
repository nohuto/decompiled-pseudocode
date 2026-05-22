/*
 * XREFs of ?Create@CTableTransferEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTableTransferEffect@@@Z @ 0x1800EE780
 * Callers:
 *     ?CreateTableTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTableTransferEffect@@@Z @ 0x1800F0E80 (-CreateTableTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTableTransferEffe.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CTableTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800ED6A4 (--0CTableTransferEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ @ 0x1800F8034 (-Initialize@CFilterEffect@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::Create(
        struct DirectComposition::CFilterEffectProxy *a1,
        struct IDCompositionTableTransferEffect **a2)
{
  DirectComposition::CTableTransferEffect *v4; // rax
  DirectComposition::CTableTransferEffect *v5; // rax
  struct IDCompositionTableTransferEffect *v6; // rbx
  int v7; // edi

  v4 = (DirectComposition::CTableTransferEffect *)DefaultHeap::Alloc(0x60uLL);
  if ( v4 && (v5 = DirectComposition::CTableTransferEffect::CTableTransferEffect(v4, a1), (v6 = v5) != 0LL) )
  {
    v7 = DirectComposition::CFilterEffect::Initialize((DirectComposition::CTableTransferEffect *)((char *)v5 + 8));
    if ( v7 < 0 )
      (*(void (__fastcall **)(struct IDCompositionTableTransferEffect *))(*(_QWORD *)v6 + 16LL))(v6);
    else
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}

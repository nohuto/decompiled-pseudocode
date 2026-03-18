/*
 * XREFs of ?OnVisualChanged@CVisualBitmap@@IEAAXXZ @ 0x1802091D8
 * Callers:
 *     ?SetVisual@?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z @ 0x1801A5EF8 (-SetVisual@-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180047320 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x180208A84 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

void __fastcall CVisualBitmap::OnVisualChanged(CVisualBitmap *this)
{
  __int64 v2; // rcx
  CVisual *v3; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  ReleaseInterface<CVisualTree>((__int64 *)this + 12);
  v3 = (CVisual *)*((_QWORD *)this + 9);
  if ( v3 )
    CVisual::GetVisualTree(v3, (struct CVisualTree **)this + 12);
}

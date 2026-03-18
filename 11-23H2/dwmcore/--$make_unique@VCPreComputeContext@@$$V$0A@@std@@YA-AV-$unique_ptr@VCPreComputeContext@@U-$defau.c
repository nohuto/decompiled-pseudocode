/*
 * XREFs of ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18001F94C
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18005EF70 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008D66C (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x1800D22FC (--0CPreComputeContext@@QEAA@XZ.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 */

CPreComputeContext **__fastcall std::make_unique<CPreComputeContext,,0>(CPreComputeContext **a1)
{
  void *v2; // rdi
  CPreComputeContext *v3; // rax

  v2 = operator new(0x7B0uLL);
  v3 = 0LL;
  if ( v2 )
  {
    memset_0(v2, 0, 0x7B0uLL);
    v3 = CPreComputeContext::CPreComputeContext((CPreComputeContext *)v2);
  }
  *a1 = v3;
  return a1;
}

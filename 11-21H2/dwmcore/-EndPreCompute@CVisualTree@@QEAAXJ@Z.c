/*
 * XREFs of ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008DC78
 * Callers:
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F144 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x180194078 (-EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z.c)
 * Callees:
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x1800A5BA0 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::EndPreCompute(CVisualTree *this, int a2)
{
  __int64 v4; // rax
  CDirtyRegion *v5; // rbp
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 208LL))(this);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( a2 < 0 )
  {
    CDirtyRegion::SetFullDirty((CVisualTree *)((char *)this + 104));
    v5 = (CVisualTree *)((char *)this + 104);
    if ( a2 == -2147467260 )
      return;
  }
  else
  {
    v5 = (CVisualTree *)((char *)this + 104);
  }
  for ( i = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(i - 1));
    (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v9 + 16LL))(v9, this, (char *)this + 104);
  }
  CDirtyRegion::Optimize(v5);
  for ( j = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)j > 0; LODWORD(j) = j - 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(j - 1));
    (*(void (__fastcall **)(__int64, CVisualTree *, CDirtyRegion *))(*(_QWORD *)v8 + 8LL))(v8, this, v5);
  }
}

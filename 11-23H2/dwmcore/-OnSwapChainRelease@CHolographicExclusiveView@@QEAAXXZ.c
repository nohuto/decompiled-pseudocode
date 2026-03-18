/*
 * XREFs of ?OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ @ 0x1802A82DC
 * Callers:
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AD6F8 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A80F0 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802ABE9C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::OnSwapChainRelease(struct IUnknown **this)
{
  struct IUnknown *v2; // rax
  CHolographicInteropTaskQueue *lpVtbl; // rcx

  if ( this[12] )
  {
    CHolographicExclusiveView::DeactivateSwapChain((CHolographicExclusiveView *)this);
    v2 = this[8];
    lpVtbl = (CHolographicInteropTaskQueue *)v2[7].lpVtbl;
    if ( lpVtbl )
    {
      if ( LOBYTE(v2[30].lpVtbl) )
        CHolographicInteropTaskQueue::PostMessageW(lpVtbl, 0x1Cu, this[12], 0LL, 0LL, 0LL, 0LL);
    }
    ((void (__fastcall *)(struct IUnknown *))this[12]->lpVtbl->Release)(this[12]);
    this[12] = 0LL;
    *((_BYTE *)this + 82) = 0;
  }
}

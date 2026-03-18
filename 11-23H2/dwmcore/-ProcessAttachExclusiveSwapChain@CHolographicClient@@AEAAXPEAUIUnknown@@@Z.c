/*
 * XREFs of ?ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AD24C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AD334 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnSwapChainAttach@CHolographicExclusiveView@@QEAAXXZ @ 0x1802A8270 (-OnSwapChainAttach@CHolographicExclusiveView@@QEAAXXZ.c)
 */

void __fastcall CHolographicClient::ProcessAttachExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v2) >= 0 )
  {
    CHolographicExclusiveView::OnSwapChainAttach((RTL_SRWLOCK *)v2);
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

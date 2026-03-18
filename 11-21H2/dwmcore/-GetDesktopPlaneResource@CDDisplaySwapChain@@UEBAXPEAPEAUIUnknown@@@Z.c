/*
 * XREFs of ?GetDesktopPlaneResource@CDDisplaySwapChain@@UEBAXPEAPEAUIUnknown@@@Z @ 0x18027B170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDisplaySwapChain::GetDesktopPlaneResource(CDDisplaySwapChain *this, struct IUnknown **a2)
{
  struct IUnknown *v3; // rbx

  v3 = *(struct IUnknown **)(32LL * *((unsigned int *)this + 76) + *((_QWORD *)this + 34));
  if ( v3 )
    ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  *a2 = v3;
}

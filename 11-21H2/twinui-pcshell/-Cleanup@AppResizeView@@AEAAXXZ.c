/*
 * XREFs of ?Cleanup@AppResizeView@@AEAAXXZ @ 0x18051E31C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___ @ 0x18051DF28 (wil--details--ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___--_ScopeExitFn__lambda_2f41.c)
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18051E2D8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18051E380 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppResizeView::Cleanup(AppResizeView *this, __int64 a2)
{
  IUnknown *v3; // rcx
  __int64 v4; // rcx

  v3 = (IUnknown *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    IUnknown_SetSite(v3, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
  }
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, a2);
  }
}

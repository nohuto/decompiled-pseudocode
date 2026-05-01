/*
 * XREFs of _lambda_7f57f26ac444fb3354da6dd48979a63d_::operator() @ 0x18050AC68
 * Callers:
 *     wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x18050AAB4 (wil--details--ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___--_ScopeExitFn__lambda_7f57.c)
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x18050BAC0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_7f57f26ac444fb3354da6dd48979a63d_::operator()(IUnknown ***a1)
{
  ((void (__fastcall *)(IUnknown *))(*a1)[19]->lpVtbl[2].AddRef)((*a1)[19]);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)*a1 + 19);
  return IUnknown_SetSite(*a1[1], 0LL);
}

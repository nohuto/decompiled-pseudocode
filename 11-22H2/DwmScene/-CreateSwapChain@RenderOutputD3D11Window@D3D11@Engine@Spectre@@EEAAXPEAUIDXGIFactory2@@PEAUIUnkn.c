/*
 * XREFs of ?CreateSwapChain@RenderOutputD3D11Window@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9A30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Window::CreateSwapChain(
        Spectre::Engine::D3D11::RenderOutputD3D11Window *this,
        struct IDXGIFactory2 *a2,
        struct IUnknown *a3,
        struct DXGI_SWAP_CHAIN_DESC1 *a4,
        struct IDXGISwapChain1 **a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  ULONG_PTR v11; // rdi
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v8 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Window *))(*(_QWORD *)this + 368LL))(this);
  a4->SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
  v9 = v8;
  if ( ((int (__fastcall *)(struct IDXGIFactory2 *, struct IUnknown *, __int64, struct DXGI_SWAP_CHAIN_DESC1 *, _QWORD, _QWORD, struct IDXGISwapChain1 **))a2->lpVtbl->CreateSwapChainForHwnd)(
         a2,
         a3,
         v8,
         a4,
         0LL,
         0LL,
         a5) < 0 )
  {
    a4->SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    v10 = ((__int64 (__fastcall *)(struct IDXGIFactory2 *, struct IUnknown *, __int64, struct DXGI_SWAP_CHAIN_DESC1 *, _QWORD, _QWORD, struct IDXGISwapChain1 **))a2->lpVtbl->CreateSwapChainForHwnd)(
            a2,
            a3,
            v9,
            a4,
            0LL,
            0LL,
            a5);
    v11 = v10;
    if ( v10 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v11;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
  ((void (__fastcall *)(struct IDXGIFactory2 *, __int64, __int64))a2->lpVtbl->MakeWindowAssociation)(a2, v9, 2LL);
}

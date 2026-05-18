/*
 * XREFs of ?CreateSwapChain@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9BA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDescription@RenderOutput@Engine@Spectre@@UEBA?AUOutputDescription@23@XZ @ 0x18002BF80 (-GetDescription@RenderOutput@Engine@Spectre@@UEBA-AUOutputDescription@23@XZ.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Xaml::CreateSwapChain(
        Spectre::Engine::D3D11::RenderOutputD3D11Xaml *this,
        struct IDXGIFactory2 *a2,
        struct IUnknown *a3,
        struct DXGI_SWAP_CHAIN_DESC1 *a4,
        struct IDXGISwapChain1 **a5)
{
  int v9; // eax
  ULONG_PTR v10; // rbx
  void (__fastcall *v11)(_QWORD, __int64); // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-108h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-100h]
  __int128 v15; // [rsp+40h] [rbp-F8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(this, &v13);
  if ( v13 )
  {
    a4->SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
    v9 = ((__int64 (__fastcall *)(struct IDXGIFactory2 *, struct IUnknown *, struct DXGI_SWAP_CHAIN_DESC1 *, _QWORD, struct IDXGISwapChain1 **))a2->lpVtbl->CreateSwapChainForComposition)(
           a2,
           a3,
           a4,
           0LL,
           a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v10;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v11 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)Spectre::Engine::RenderOutput::GetDescription(
                                                              (__int64)this,
                                                              &v15)
                                                + 2);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 368LL))(this);
      v11(*a5, v12);
    }
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}

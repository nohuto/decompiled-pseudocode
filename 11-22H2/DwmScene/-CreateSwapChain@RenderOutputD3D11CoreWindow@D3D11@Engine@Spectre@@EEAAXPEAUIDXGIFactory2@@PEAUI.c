/*
 * XREFs of ?CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800163D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV-.c)
 *     ?GetDescription@RenderOutput@Engine@Spectre@@UEBA?AUOutputDescription@23@XZ @ 0x18002BF80 (-GetDescription@RenderOutput@Engine@Spectre@@UEBA-AUOutputDescription@23@XZ.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow::CreateSwapChain(
        Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow *this,
        struct IDXGIFactory2 *a2,
        struct IUnknown *a3,
        struct DXGI_SWAP_CHAIN_DESC1 *a4,
        struct IDXGISwapChain1 **a5)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  int v12; // eax
  ULONG_PTR v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  int v16; // eax
  ULONG_PTR v17; // rbx
  int v18; // eax
  ULONG_PTR v19; // rbx
  void (__fastcall *v20)(_QWORD, __int64); // rbx
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v25; // [rsp+58h] [rbp-A8h]
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v28; // [rsp+120h] [rbp+20h] BYREF
  EXCEPTION_RECORD v29; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+2B8h] [rbp+1B8h]

  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(this, &v24);
  if ( v24 )
  {
    a4->SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
    v9 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow *))(*(_QWORD *)this + 368LL))(this);
    v23 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>((__int64 *)&v23);
    v12 = v10(v9, &GUID_79b9d5f2_879e_4b89_b798_79e47598030c, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v13;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v22 = 0LL;
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
    v15 = **v23;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    v16 = v15(v14, &GUID_00000000_0000_0000_c000_000000000046, &v22);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset_0(&v28, 0, sizeof(v28));
      v28.ExceptionCode = -532265403;
      v28.ExceptionAddress = retaddr;
      v28.NumberParameters = 1;
      v28.ExceptionInformation[0] = v17;
      RaiseFailFastException(&v28, 0LL, 0);
    }
    v18 = ((__int64 (__fastcall *)(struct IDXGIFactory2 *, struct IUnknown *, __int64, struct DXGI_SWAP_CHAIN_DESC1 *, _QWORD, struct IDXGISwapChain1 **))a2->lpVtbl->CreateSwapChainForCoreWindow)(
            a2,
            a3,
            v22,
            a4,
            0LL,
            a5);
    v19 = v18;
    if ( v18 < 0 )
    {
      memset_0(&v29, 0, sizeof(v29));
      v29.ExceptionCode = -532265403;
      v29.ExceptionAddress = retaddr;
      v29.NumberParameters = 1;
      v29.ExceptionInformation[0] = v19;
      RaiseFailFastException(&v29, 0LL, 0);
    }
    v20 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)Spectre::Engine::RenderOutput::GetDescription(
                                                              (__int64)this,
                                                              &v26)
                                                + 2);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow *))(*(_QWORD *)this + 368LL))(this);
      v20(*a5, v21);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  }
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
}

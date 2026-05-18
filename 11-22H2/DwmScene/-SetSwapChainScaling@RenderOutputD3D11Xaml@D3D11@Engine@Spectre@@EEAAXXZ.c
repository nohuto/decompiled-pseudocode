/*
 * XREFs of ?SetSwapChainScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800CA990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ?UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002D008 (-UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ.c)
 *     ??$As@UIDXGISwapChain2@@@?$ComPtr@UIDXGISwapChain1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGISwapChain2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C8794 (--$As@UIDXGISwapChain2@@@-$ComPtr@UIDXGISwapChain1@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?GetSwapChain@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBAAEBV?$ComPtr@UIDXGISwapChain1@@@WRL@Microsoft@@XZ @ 0x1800C9FD0 (-GetSwapChain@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBAAEBV-$ComPtr@UIDXGISwapChain1@@@WRL@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Xaml::SetSwapChainScaling(
        Spectre::Engine::D3D11::RenderOutputD3D11Xaml *this)
{
  double v2; // xmm0_8
  float v3; // xmm7_4
  double v4; // xmm0_8
  float v5; // xmm6_4
  _QWORD *SwapChain; // rax
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  float v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+2Ch] [rbp-4Ch]
  float v11; // [rsp+34h] [rbp-44h]
  __int64 v12; // [rsp+38h] [rbp-40h]

  Spectre::Engine::RenderOutput::UpdateImageProcessingActiveSize(this);
  v2 = (*(double (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 128LL))(this);
  v3 = *(float *)&v2
     * (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 112LL))(this);
  v4 = (*(double (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 136LL))(this);
  v5 = *(float *)&v4
     * (*(float (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11Xaml *))(*(_QWORD *)this + 120LL))(this);
  if ( v3 != 0.0 && v5 != 0.0 )
  {
    SwapChain = (_QWORD *)Spectre::Engine::D3D11::RenderOutputD3D11::GetSwapChain((__int64)this);
    if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>(SwapChain) )
    {
      v8 = 0LL;
      if ( !(unsigned int)Microsoft::WRL::ComPtr<IDXGISwapChain1>::As<IDXGISwapChain2>(v7, &v8) )
      {
        v10 = 0LL;
        v12 = 0LL;
        v9 = 1.0 / v3;
        v11 = 1.0 / v5;
        (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v8 + 272LL))(v8, &v9);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    }
  }
}

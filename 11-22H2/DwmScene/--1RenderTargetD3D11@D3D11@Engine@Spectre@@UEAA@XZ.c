/*
 * XREFs of ??1RenderTargetD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CB610
 * Callers:
 *     ??_GRenderTargetD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800CB6B0 (--_GRenderTargetD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderTargetD3D11::~RenderTargetD3D11(
        Spectre::Engine::D3D11::RenderTargetD3D11 *this)
{
  std::_Ref_count_base *v2[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v2 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 12, (__int64 *)v2);
  if ( v2[1] )
    std::_Ref_count_base::_Decref(v2[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Spectre::Engine::DeviceFrameBuffer::~DeviceFrameBuffer(this);
}

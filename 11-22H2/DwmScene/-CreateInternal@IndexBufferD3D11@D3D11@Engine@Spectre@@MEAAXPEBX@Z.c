/*
 * XREFs of ?CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D83D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@PEBDAEAVRenderDeviceD3D11@234@AEAUArrayBufferDesc@34@PEBXW4D3D11_BIND_FLAG@@@Z @ 0x1800D8568 (-CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@.c)
 */

void __fastcall Spectre::Engine::D3D11::IndexBufferD3D11::CreateInternal(
        Spectre::Engine::D3D11::IndexBufferD3D11 *this,
        const void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r11
  __int64 *v6; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v7);
  v6 = (__int64 *)Spectre::Engine::D3D11::D3DBufferUtils::CreateBuffer(&v9, v4, v7, v5, a2, 2);
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)this + 13, v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  Spectre::Engine::RendererResource::SetMemoryTrackingData(
    (__int64)this,
    *(unsigned int *)(*((_QWORD *)this + 12) + 12LL),
    6);
}

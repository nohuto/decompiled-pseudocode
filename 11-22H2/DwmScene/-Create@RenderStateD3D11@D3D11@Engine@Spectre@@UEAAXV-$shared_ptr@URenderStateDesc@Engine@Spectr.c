/*
 * XREFs of ?Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4D50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$make_shared@URenderStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@0@XZ @ 0x18008808C (--$make_shared@URenderStateDesc@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@URenderStateDesc@Engi.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetBlendDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_BLEND_DESC@@@Z @ 0x1800D4F2C (-GetBlendDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_BLEND_DESC@@@Z.c)
 *     ?GetDepthStencilDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_DEPTH_STENCIL_DESC@@@Z @ 0x1800D522C (-GetDepthStencilDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_DEPTH_STENCIL_DES.c)
 *     ?GetRasterizerDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_RASTERIZER_DESC@@@Z @ 0x1800D53E4 (-GetRasterizerDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_RASTERIZER_DESC@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::RenderStateD3D11::Create(_QWORD *a1, __int64 *a2)
{
  Spectre::Engine::D3D11 **v4; // r12
  __int64 *v5; // rax
  struct D3D11_RASTERIZER_DESC *v6; // r8
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _BYTE *, _QWORD *); // rsi
  int v9; // eax
  struct D3D11_BLEND_DESC *v10; // r8
  __int64 (__fastcall *v11)(__int64, _BYTE *, _QWORD *); // rsi
  int v12; // eax
  struct D3D11_DEPTH_STENCIL_DESC *v13; // r8
  __int64 (__fastcall *v14)(__int64, _BYTE *, _QWORD *); // rsi
  int v15; // eax
  std::_Ref_count_base *v16; // rcx
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v17; // [rsp+20h] [rbp-E0h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-D8h]
  __int64 v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[64]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[272]; // [rsp+80h] [rbp-80h] BYREF

  v19[1] = (__int64)a2;
  v4 = (Spectre::Engine::D3D11 **)(a1 + 12);
  if ( *a2 )
  {
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 12, a2);
  }
  else
  {
    v5 = std::make_shared<Spectre::Engine::RenderStateDesc,>(&v17);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v4, v5);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
  }
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)(a1 + 9), &v17);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v17, v19);
  Spectre::Engine::D3D11::GetRasterizerDesc(*v4, (const struct Spectre::Engine::RenderStateDesc *)v20, v6);
  v7 = v19[0];
  v8 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v19[0] + 176LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 14);
  v9 = v8(v7, v20, a1 + 14);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v17, v9);
  Spectre::Engine::D3D11::GetBlendDesc(*v4, (const struct Spectre::Engine::RenderStateDesc *)v21, v10);
  v11 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v7 + 160LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 15);
  v12 = v11(v7, v21, a1 + 15);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v17, v12);
  Spectre::Engine::D3D11::GetDepthStencilDesc(*v4, (const struct Spectre::Engine::RenderStateDesc *)v20, v13);
  v14 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v7 + 168LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 16);
  v15 = v14(v7, v20, a1 + 16);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v17, v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  v16 = (std::_Ref_count_base *)a2[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}

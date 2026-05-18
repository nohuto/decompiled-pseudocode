/*
 * XREFs of ?ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@QEBM@Z @ 0x1800CFDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@XZ @ 0x1800CC108 (-GetResourceView@RenderTargetD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11RenderTargetView.c)
 *     ??$spectre_safe_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@Utils@Spectre@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@3@@Z @ 0x1800CF9D8 (--$spectre_safe_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@Uti.c)
 *     ?GetDeviceRenderTarget@FrameBuffer@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0540 (-GetDeviceRenderTarget@FrameBuffer@Engine@Spectre@@QEAA-AV-$shared_ptr@VDeviceFrameBuffer@Engine.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::ClearRenderTarget(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-20h]
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  Spectre::Engine::FrameBuffer::GetDeviceRenderTarget(*a2, v7, *(unsigned int *)(a1 + 88));
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::RenderTargetD3D11,Spectre::Engine::DeviceFrameBuffer>((__int64)&v5);
  Spectre::Engine::D3D11::RenderTargetD3D11::GetResourceView(v5, &v8);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 400LL))(*(_QWORD *)(a1 + 144), v8, a3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}

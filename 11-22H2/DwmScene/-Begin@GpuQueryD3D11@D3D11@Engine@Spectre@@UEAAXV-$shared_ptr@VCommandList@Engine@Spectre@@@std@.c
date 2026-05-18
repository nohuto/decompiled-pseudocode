/*
 * XREFs of ?Begin@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D7C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C8AB8 (--$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$sha.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::Begin(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v4 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(&v6, a2);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 104), v4);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  Spectre::Engine::D3D11::CommandListD3D11::GetContext(*(_QWORD *)(a1 + 104), &v8);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 216LL))(v8, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v5 = (std::_Ref_count_base *)a2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}

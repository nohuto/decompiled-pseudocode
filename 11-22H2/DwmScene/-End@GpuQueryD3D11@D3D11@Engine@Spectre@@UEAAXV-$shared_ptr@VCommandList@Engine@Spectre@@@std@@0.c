/*
 * XREFs of ?End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800D7E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C8AB8 (--$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$sha.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800D7B50 (--$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@st_ea_1800D7B50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::End(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rax
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h]
  _QWORD *v14; // [rsp+60h] [rbp+18h]

  v14 = a3;
  v13 = a2;
  v6 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(&v10, a3);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 120), v6);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( *(_DWORD *)(a1 + 140) == 1 || *(_DWORD *)(a1 + 140) == 3 )
  {
    v7 = std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(&v10, a2);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 104), v7);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  Spectre::Engine::D3D11::CommandListD3D11::GetContext(*(_QWORD *)(a1 + 104), &v12);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 224LL))(v12, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}

/*
 * XREFs of ?SubmitVertexLayout@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x1800D3390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008C334 (-GetDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceVertexLayout@Engi.c)
 *     ??$dynamic_pointer_cast@VVertexLayoutD3D11@D3D11@Engine@Spectre@@VDeviceVertexLayout@34@@std@@YA?AV?$shared_ptr@VVertexLayoutD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@0@@Z @ 0x1800CF8DC (--$dynamic_pointer_cast@VVertexLayoutD3D11@D3D11@Engine@Spectre@@VDeviceVertexLayout@34@@std@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitVertexLayout(__int64 a1, __int64 *a2)
{
  __int64 *DeviceVertexLayout; // rax
  char v4; // bl
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-28h]
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+60h] [rbp+10h] BYREF

  LODWORD(v13) = 0;
  if ( *a2 )
  {
    DeviceVertexLayout = Spectre::Engine::VertexLayout::GetDeviceVertexLayout(*a2, &v11, *(_DWORD *)(a1 + 88));
    v4 = 1;
    v5 = *DeviceVertexLayout;
  }
  else
  {
    v9 = 0LL;
    DeviceVertexLayout = &v8;
    v4 = 2;
    v5 = 0LL;
  }
  v10[0] = v5;
  v6 = (std::_Ref_count_base *)DeviceVertexLayout[1];
  v10[1] = v6;
  *DeviceVertexLayout = 0LL;
  DeviceVertexLayout[1] = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  if ( (v4 & 1) != 0 && v12 )
    std::_Ref_count_base::_Decref(v12);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::VertexLayoutD3D11,Spectre::Engine::DeviceVertexLayout>(&v8, v10);
  v7 = v8;
  if ( v8 )
  {
    v7 = *(_QWORD *)(v8 + 144);
    v13 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v7);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}

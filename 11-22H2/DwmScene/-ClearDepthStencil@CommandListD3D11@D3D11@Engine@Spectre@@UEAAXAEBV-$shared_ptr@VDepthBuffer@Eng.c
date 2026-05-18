/*
 * XREFs of ?ClearDepthStencil@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@_N1ME@Z @ 0x1800CFBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$spectre_safe_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@Utils@Spectre@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@3@@Z @ 0x1800CF9AC (--$spectre_safe_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@Util.c)
 *     ?GetDeviceDepthBuffer@DepthBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D04E8 (-GetDeviceDepthBuffer@DepthBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceDepthBuffer@Engine@.c)
 *     ?GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@XZ @ 0x1800D05E4 (-GetResourceView@DepthBufferD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DepthStencilView@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::ClearDepthStencil(
        __int64 a1,
        _QWORD *a2,
        unsigned __int8 a3,
        char a4)
{
  unsigned int v5; // r15d
  __int64 *DeviceDepthBuffer; // rax
  char v8; // bl
  __int64 v9; // rcx
  std::_Ref_count_base *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-28h]
  _QWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v16; // [rsp+58h] [rbp-8h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  int v18; // [rsp+A0h] [rbp+40h]

  v5 = a3;
  v18 = 0;
  if ( *a2 )
  {
    DeviceDepthBuffer = (__int64 *)Spectre::Engine::DepthBuffer::GetDeviceDepthBuffer(
                                     *a2,
                                     &v15,
                                     *(unsigned int *)(a1 + 88));
    v8 = 1;
    v9 = *DeviceDepthBuffer;
  }
  else
  {
    v13 = 0LL;
    DeviceDepthBuffer = &v12;
    v8 = 2;
    v9 = 0LL;
  }
  v14[0] = v9;
  v10 = (std::_Ref_count_base *)DeviceDepthBuffer[1];
  v14[1] = v10;
  *DeviceDepthBuffer = 0LL;
  DeviceDepthBuffer[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  if ( (v8 & 1) != 0 && v16 )
    std::_Ref_count_base::_Decref(v16);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v15, v14);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::DepthBufferD3D11,Spectre::Engine::DeviceDepthBuffer>((__int64)&v12);
  Spectre::Engine::D3D11::DepthBufferD3D11::GetResourceView(v12, &v17);
  v11 = v5 | 2;
  if ( !a4 )
    v11 = v5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 424LL))(*(_QWORD *)(a1 + 144), v17, v11);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}

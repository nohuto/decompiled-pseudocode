/*
 * XREFs of ?FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D01E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C8AB8 (--$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$sha.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::FinalizeSubmit(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, struct ID3D11DeviceChild **); // rdi
  int v6; // ebx
  int v7; // edx
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v8; // rbx
  const char *Name; // rax
  struct ID3D11DeviceChild *v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v12; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v17; // [rsp+58h] [rbp-28h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 56LL))(*a2) )
  {
    std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(&v14, a2);
    Spectre::Engine::D3D11::CommandListD3D11::GetContext(v14, &v11);
    v10 = 0LL;
    v4 = v11;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, struct ID3D11DeviceChild **))(*(_QWORD *)v11 + 912LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    v6 = v5(v4, 0LL, &v10);
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v16);
    std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
      (__int64 *)&v12,
      &v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    v7 = v6;
    v8 = v12;
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v12, v7);
    if ( (*(unsigned __int8 (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *))(*(_QWORD *)v8 + 16LL))(v8) )
    {
      Name = (const char *)Spectre::Engine::RendererResource::GetName(*a2, &v16);
      if ( *((_QWORD *)Name + 3) >= 0x10uLL )
        Name = *(const char **)Name;
      D3D11_SetDebugName(v10, Name);
      std::string::_Tidy_deallocate((__int64)&v16);
      (*(void (__fastcall **)(_QWORD, struct ID3D11DeviceChild *, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v10,
        0LL);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
}

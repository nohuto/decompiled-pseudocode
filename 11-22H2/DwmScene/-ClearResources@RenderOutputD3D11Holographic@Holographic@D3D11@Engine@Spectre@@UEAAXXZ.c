/*
 * XREFs of ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18002C9C4 (-SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@st.c)
 *     ?SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18002CB10 (-SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@s.c)
 *     ??$?4UID3D11DeviceContext1@@@?$ComPtr@UID3D11DeviceContext@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@UID3D11DeviceContext1@@@12@@Z @ 0x1800C8700 (--$-4UID3D11DeviceContext1@@@-$ComPtr@UID3D11DeviceContext@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV-$.c)
 *     ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C8AB8 (--$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$sha.c)
 *     ?ClearResources@CommandListD3D11@D3D11@Engine@Spectre@@QEAAXXZ @ 0x1800CFE78 (-ClearResources@CommandListD3D11@D3D11@Engine@Spectre@@QEAAXXZ.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     ?GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800D9750 (-GetRendererD3D11@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEBA-AV-$shared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::ClearResources(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this)
{
  __int64 v2; // rbx
  _QWORD *CommandList; // rax
  __int64 *Context; // rax
  _QWORD *v5; // rbx
  std::_Ref_count_base *v6; // rcx
  Spectre::Engine::D3D11::CommandListD3D11 *v7[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 65);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 66);
  Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetRendererD3D11(this, &v10);
  if ( v10 )
  {
    v2 = 0LL;
    v12 = 0LL;
    CommandList = (_QWORD *)Spectre::Engine::RenderDevice::GetCommandList(v10);
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v8,
      CommandList);
    if ( std::operator!=<Spectre::Engine::Scene>(&v8) )
    {
      std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(v7, &v8);
      Context = Spectre::Engine::D3D11::CommandListD3D11::GetContext((__int64)v7[0], &v13);
      Microsoft::WRL::ComPtr<ID3D11DeviceContext>::operator=<ID3D11DeviceContext1>(&v12, Context);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      Spectre::Engine::D3D11::CommandListD3D11::ClearResources(v7[0]);
      if ( v7[1] )
        std::_Ref_count_base::_Decref(v7[1]);
      v2 = v12;
    }
    *(_OWORD *)v7 = 0LL;
    Spectre::Engine::RenderOutput::SetRenderTarget((__int64)this, v7);
    *(_OWORD *)v7 = 0LL;
    Spectre::Engine::RenderOutput::SetDepthBuffer((__int64)this, v7);
    if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>(&v12) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 880LL))(v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 888LL))(v2);
    }
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v5 = (_QWORD *)((char *)this + 536);
  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 67) )
  {
    (**(void (__fastcall ***)(_QWORD))*v5)(*v5);
    *v5 = 0LL;
    v6 = (std::_Ref_count_base *)*((_QWORD *)this + 68);
    *((_QWORD *)this + 68) = 0LL;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
}

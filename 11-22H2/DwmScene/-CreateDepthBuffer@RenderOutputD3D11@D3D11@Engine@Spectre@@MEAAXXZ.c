/*
 * XREFs of ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0
 * Callers:
 *     ?CreateDepthBuffer@RenderOutputDwm@@MEAAXXZ @ 0x180011170 (-CreateDepthBuffer@RenderOutputDwm@@MEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x1800248C4 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_1800248C4.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18002C9C4 (-SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VDepthBuffer@Engine@Spectre@@@st.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@I@Z @ 0x18006F8B0 (-Create@DepthBuffer@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC (-CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceDepthBuffer@E.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::CreateDepthBuffer(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  int v4; // eax
  struct Spectre::Engine::Engine *Engine; // rax
  _QWORD *v6; // rax
  __int64 *v7; // r9
  std::_Ref_count_base *v8[2]; // [rsp+30h] [rbp-50h] BYREF
  Spectre::Engine::RenderDevice *v9; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v10; // [rsp+48h] [rbp-38h]
  _OWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v13; // [rsp+78h] [rbp-8h]

  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(this, &v9);
  if ( v9 )
  {
    v2 = std::string::string(v11, (__int64)"RenderOutput DepthBuffer");
    v3 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 88LL))(this);
    v4 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 80LL))(this);
    Spectre::Engine::D3D11::DepthBufferD3D11::CreateDepthBuffer(
      (unsigned int)&v12,
      (unsigned int)&v9,
      v4,
      v3,
      (__int64)v2);
    Engine = Spectre::Engine::RenderDevice::GetEngine(v9);
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>((__int64)Engine, v8);
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v11,
           &v12);
    Spectre::Engine::DepthBuffer::Create(v7, v6, 0);
    v11[0] = *(_OWORD *)v8;
    *(_OWORD *)v8 = 0LL;
    Spectre::Engine::RenderOutput::SetDepthBuffer((__int64)this, v11);
    if ( v8[1] )
      std::_Ref_count_base::_Decref(v8[1]);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}

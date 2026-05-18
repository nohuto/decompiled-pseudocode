/*
 * XREFs of ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420
 * Callers:
 *     ?CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9560 (-CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204 (-Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@st.c)
 *     ?SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18002CB10 (-SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@s.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::CreateRenderTarget(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  int v6; // eax
  struct Spectre::Engine::Engine *Engine; // rax
  std::_Ref_count_base *v9[2]; // [rsp+30h] [rbp-50h] BYREF
  Spectre::Engine::RenderDevice *v10; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-38h]
  _OWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+78h] [rbp-8h]

  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(a1, &v10);
  if ( v10 )
  {
    v4 = std::string::string(v12, (__int64)"RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    Spectre::Engine::D3D11::RenderTargetD3D11::CreateRenderTarget(
      (unsigned int)&v13,
      (unsigned int)&v10,
      v6,
      v5,
      (__int64)a2,
      (__int64)v4);
    Engine = Spectre::Engine::RenderDevice::GetEngine(v10);
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, v9);
    Spectre::Engine::FrameBuffer::Create((__int64)v9[0], &v13);
    v12[0] = *(_OWORD *)v9;
    *(_OWORD *)v9 = 0LL;
    Spectre::Engine::RenderOutput::SetRenderTarget(a1, v12);
    if ( v9[1] )
      std::_Ref_count_base::_Decref(v9[1]);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
}

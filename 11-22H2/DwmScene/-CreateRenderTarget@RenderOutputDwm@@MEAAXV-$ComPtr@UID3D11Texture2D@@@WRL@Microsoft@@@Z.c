/*
 * XREFs of ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ??$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18001071C (--$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204 (-Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@st.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18002CB10 (-SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@s.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall RenderOutputDwm::CreateRenderTarget(__int64 a1, struct ID3D11DeviceChild **a2)
{
  Spectre::Engine::RenderDevice *v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 Device; // rax
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, struct ID3D11DeviceChild *, _QWORD, struct ID3D11DeviceChild **); // rbx
  ULONG_PTR v10; // rbx
  int v11; // ebx
  struct Spectre::Engine::Engine *Engine; // rax
  struct ID3D11DeviceChild *v14; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11DeviceChild *v15; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D11DeviceChild *v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-A8h]
  struct ID3D11DeviceChild **v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+80h] [rbp-80h] BYREF
  Spectre::Engine::RenderDevice *v23; // [rsp+A0h] [rbp-60h] BYREF
  std::_Ref_count_base *v24; // [rsp+A8h] [rbp-58h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v26[12]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v20 = a2;
  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(a1, &v23);
  v4 = v23;
  if ( v23 )
  {
    v21 = 0LL;
    if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>(a2) )
    {
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceFrameBuffer>((__int64)v4, &v18);
      v5 = v18;
      v6 = std::string::string(v22, (__int64)"Output");
      Spectre::Engine::RendererResource::SetName(v5, v6);
      ((void (__fastcall *)(struct ID3D11DeviceChild *, _DWORD *))(*a2)->lpVtbl[1].GetDevice)(*a2, v26);
      v14 = 0LL;
      Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(v4, &v15);
      v8 = *(_QWORD *)Device;
      v9 = *(int (__fastcall **)(__int64, struct ID3D11DeviceChild *, _QWORD, struct ID3D11DeviceChild **))(**(_QWORD **)Device + 72LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      v10 = v9(v8, *a2, 0LL, &v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      if ( (v10 & 0x80000000) != 0LL )
      {
        memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v10;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      D3D11_SetDebugName(*a2, "RenderOutput ColorBuffer");
      D3D11_SetDebugName(v14, "RenderOutput ColorBuffer");
      v11 = _RTDynamicCast_0(
              v18,
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              0);
      v17 = 0LL;
      v16 = *a2;
      Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v16);
      v15 = v14;
      if ( v14 )
        ((void (__fastcall *)(struct ID3D11DeviceChild *))v14->lpVtbl->AddRef)(v14);
      Spectre::Engine::D3D11::RenderTargetD3D11::Create(
        v11,
        (unsigned int)&v15,
        (unsigned int)&v16,
        (unsigned int)&v17,
        v26[0],
        v26[1]);
      Engine = Spectre::Engine::RenderDevice::GetEngine(v4);
      Spectre::Engine::Engine::CreateResource<Spectre::Engine::FrameBuffer,>((__int64)Engine, v22);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v21, (__int64 *)v22);
      if ( v22[1] )
        std::_Ref_count_base::_Decref(v22[1]);
      Spectre::Engine::FrameBuffer::Create(v21, &v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    *(_OWORD *)v22 = v21;
    Spectre::Engine::RenderOutput::SetRenderTarget(a1, v22);
  }
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a2);
}

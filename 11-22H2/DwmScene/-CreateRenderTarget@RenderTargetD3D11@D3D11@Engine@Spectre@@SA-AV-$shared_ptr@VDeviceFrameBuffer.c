/*
 * XREFs of ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C
 * Callers:
 *     ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420 (-CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WR.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18001071C (--$CreateResource@VDeviceFrameBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48 (-GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall Spectre::Engine::D3D11::RenderTargetD3D11::CreateRenderTarget(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4,
        struct ID3D11DeviceChild **a5,
        _QWORD *a6)
{
  const char *v10; // rdx
  _QWORD *Device; // rax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int128 *, _QWORD, struct ID3D11DeviceChild **); // rbx
  ULONG_PTR v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, struct ID3D11DeviceChild *, _QWORD, struct ID3D11DeviceChild **); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rdx
  __int64 v20; // rbx
  void **v21; // rax
  _QWORD *v22; // rbx
  struct ID3D11DeviceChild *v24; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11DeviceChild *v25; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D11DeviceChild *v26; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11DeviceChild *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct ID3D11DeviceChild *v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[20]; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+84h] [rbp-7Ch]
  __int64 *v34; // [rsp+90h] [rbp-70h]
  _QWORD *v35; // [rsp+98h] [rbp-68h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+A0h] [rbp-60h] BYREF
  EXCEPTION_RECORD v37; // [rsp+140h] [rbp+40h] BYREF
  __int128 v38; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v39[20]; // [rsp+1F0h] [rbp+F0h]
  __int64 v40; // [rsp+204h] [rbp+104h]
  _OWORD v41[2]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v42; // [rsp+230h] [rbp+130h]
  int v43; // [rsp+238h] [rbp+138h]
  void *retaddr; // [rsp+298h] [rbp+198h]

  v30 = a4;
  v34 = a1;
  v35 = a6;
  v29 = 0;
  v10 = (const char *)a6;
  if ( a6[3] >= 0x10uLL )
    v10 = (const char *)*a6;
  D3D11_SetDebugName(*a5, v10);
  v33 = 0;
  *(_DWORD *)v32 = Spectre::Engine::D3D11::D3DUtils::GetFormat(16, 0);
  *(_QWORD *)&v31 = __PAIR64__(a4, a3);
  *((_QWORD *)&v31 + 1) = 0x100000001LL;
  *(_OWORD *)&v32[4] = 1uLL;
  v38 = v31;
  *(_OWORD *)v39 = *(_OWORD *)v32;
  v40 = 0x20000LL;
  *(_QWORD *)&v39[12] = 3LL;
  v26 = 0LL;
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(*a2, &v27);
  v12 = *Device;
  v13 = *(int (__fastcall **)(__int64, __int128 *, _QWORD, struct ID3D11DeviceChild **))(*(_QWORD *)*Device + 40LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  v14 = v13(v12, &v38, 0LL, &v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(
    (Spectre::Engine::D3D11::RenderDeviceD3D11 *)*a2,
    v14);
  if ( (v14 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  D3D11_SetDebugName(v26, "BackBufferStaging");
  v25 = 0LL;
  v15 = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(*a2, &v24);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, struct ID3D11DeviceChild *, _QWORD, struct ID3D11DeviceChild **))(*(_QWORD *)*v15 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v18 = v17(v16, *a5, 0LL, &v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(
    (Spectre::Engine::D3D11::RenderDeviceD3D11 *)*a2,
    v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset_0(&v37, 0, sizeof(v37));
    v37.ExceptionCode = -532265403;
    v37.ExceptionAddress = retaddr;
    v37.NumberParameters = 1;
    v37.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v37, 0LL, 0);
  }
  v19 = (const char *)a6;
  if ( a6[3] >= 0x10uLL )
    v19 = (const char *)*a6;
  D3D11_SetDebugName(v25, v19);
  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceFrameBuffer>(*a2, a1);
  v29 = 1;
  v20 = *a1;
  v21 = (void **)std::string::string(&v31, (__int64)"Output");
  Spectre::Engine::RendererResource::SetName(v20, v21);
  v22 = (_QWORD *)_RTDynamicCast_0(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                    1);
  v24 = v26;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v24);
  v28 = *a5;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v28);
  v27 = v25;
  if ( v25 )
    ((void (__fastcall *)(struct ID3D11DeviceChild *))v25->lpVtbl->AddRef)(v25);
  Spectre::Engine::D3D11::RenderTargetD3D11::Create(v22, (__int64 *)&v27, (__int64 *)&v28, (__int64 *)&v24, a3, v30);
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v43 = 0;
  ((void (__fastcall *)(struct ID3D11DeviceChild *, _OWORD *))(*a5)->lpVtbl[1].GetDevice)(*a5, v41);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  std::string::_Tidy_deallocate((__int64)a6);
  return a1;
}

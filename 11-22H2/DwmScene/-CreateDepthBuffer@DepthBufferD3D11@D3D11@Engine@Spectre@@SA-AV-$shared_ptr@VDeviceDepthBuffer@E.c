/*
 * XREFs of ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC
 * Callers:
 *     ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0 (-CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x18006EDDC (--$CreateResource@VDeviceDepthBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shar.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48 (-GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11DepthStencilView@@@WRL@Micr.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall Spectre::Engine::D3D11::DepthBufferD3D11::CreateDepthBuffer(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4,
        _QWORD *a5)
{
  int Format; // eax
  _QWORD *Device; // rax
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _DWORD *, _QWORD, struct ID3D11DeviceChild **); // rbx
  ULONG_PTR v13; // rbx
  const char *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, struct ID3D11DeviceChild *, _DWORD *, struct ID3D11DeviceChild **); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rdx
  _QWORD *v20; // rbx
  struct ID3D11DeviceChild *v22; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11DeviceChild *v23; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D11DeviceChild *v24; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11DeviceChild *v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  _DWORD v27[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-90h]
  _QWORD *v29; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v31; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v32[12]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+238h] [rbp+138h]

  v28 = a1;
  v29 = a5;
  v26 = 0;
  Format = Spectre::Engine::D3D11::D3DUtils::GetFormat(1, 0);
  v32[0] = a3;
  v32[1] = a4;
  v32[2] = 1;
  v32[3] = 1;
  v32[4] = Format;
  v32[7] = 0;
  v32[8] = 64;
  v32[9] = 0;
  v32[10] = 0;
  v32[5] = 1;
  v32[6] = 0;
  v22 = 0LL;
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(*a2, &v25);
  v11 = *Device;
  v12 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, struct ID3D11DeviceChild **))(*(_QWORD *)*Device + 40LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v13 = v12(v11, v32, 0LL, &v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(
    (Spectre::Engine::D3D11::RenderDeviceD3D11 *)*a2,
    v13);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = (const char *)a5;
  if ( a5[3] >= 0x10uLL )
    v14 = (const char *)*a5;
  D3D11_SetDebugName(v22, v14);
  v27[0] = 0;
  v27[1] = 5;
  v27[2] = 0;
  v24 = 0LL;
  v15 = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(*a2, &v23);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, struct ID3D11DeviceChild *, _DWORD *, struct ID3D11DeviceChild **))(*(_QWORD *)*v15 + 80LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  v18 = v17(v16, v22, v27, &v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(
    (Spectre::Engine::D3D11::RenderDeviceD3D11 *)*a2,
    v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset_0(&v31, 0, sizeof(v31));
    v31.ExceptionCode = -532265403;
    v31.ExceptionAddress = retaddr;
    v31.NumberParameters = 1;
    v31.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v31, 0LL, 0);
  }
  v19 = (const char *)a5;
  if ( a5[3] >= 0x10uLL )
    v19 = (const char *)*a5;
  D3D11_SetDebugName(v24, v19);
  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceDepthBuffer>(*a2, a1);
  v26 = 1;
  v20 = (_QWORD *)_RTDynamicCast_0(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                    1);
  v23 = v22;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v23);
  v25 = v24;
  if ( v24 )
    ((void (__fastcall *)(struct ID3D11DeviceChild *))v24->lpVtbl->AddRef)(v24);
  Spectre::Engine::D3D11::DepthBufferD3D11::Create(v20, (__int64 *)&v25, (__int64 *)&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  std::string::_Tidy_deallocate((__int64)a5);
  return a1;
}

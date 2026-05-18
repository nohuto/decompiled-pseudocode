/*
 * XREFs of ?RecoverBufferData@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@X@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@6@V?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@I@Z @ 0x1800D86DC
 * Callers:
 *     ?RecoverData@VertexBufferD3D11@D3D11@Engine@Spectre@@UEBA?AV?$shared_ptr@X@std@@XZ @ 0x1800D37A0 (-RecoverData@VertexBufferD3D11@D3D11@Engine@Spectre@@UEBA-AV-$shared_ptr@X@std@@XZ.c)
 *     ?RecoverData@IndexBufferD3D11@D3D11@Engine@Spectre@@UEBA?AV?$shared_ptr@X@std@@XZ @ 0x1800D8460 (-RecoverData@IndexBufferD3D11@D3D11@Engine@Spectre@@UEBA-AV-$shared_ptr@X@std@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18000BF9A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x180050F80 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800C585C (-GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DeviceContext1@.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$spectre_safe_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@Utils@Spectre@@YAPEAVRenderDeviceD3D11@D3D11@Engine@1@PEAVRenderDevice@41@@Z @ 0x1800D7BB8 (--$spectre_safe_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@Utils@Spectre@@Y.c)
 *     ??$?0$$BY0A@EU?$default_delete@$$BY0A@E@std@@$0A@@?$shared_ptr@X@std@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x1800D84F4 (--$-0$$BY0A@EU-$default_delete@$$BY0A@E@std@@$0A@@-$shared_ptr@X@std@@QEAA@$$QEAV-$unique_ptr@$$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Spectre::Engine::D3D11::D3DBufferUtils::RecoverBufferData(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r14
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v7; // r15
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _DWORD *, _QWORD, __int64 *); // rdi
  int v10; // eax
  _QWORD *DeviceContext; // rax
  _QWORD *v12; // rax
  ULONG_PTR v13; // rbx
  void *v14; // rdx
  void *v15; // rcx
  _QWORD *v16; // rax
  void *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21[3]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v24[6]; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v4 = a4;
  v21[0] = (__int64)a1;
  v21[2] = (__int64)a3;
  v7 = (Spectre::Engine::D3D11::RenderDeviceD3D11 *)Spectre::Utils::spectre_safe_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(*a2);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v7, &v20);
  v24[5] = 0;
  v24[0] = v4;
  v24[1] = 3;
  v24[3] = 0x20000;
  v24[2] = 0;
  v24[4] = 0;
  v19 = 0LL;
  v8 = v20;
  v9 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v20 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v10 = v9(v8, v24, 0LL, &v19);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v7, v10);
  DeviceContext = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDeviceContext((__int64)v7, &v18);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*DeviceContext + 376LL))(*DeviceContext, v19, *a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  v12 = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDeviceContext((__int64)v7, &v18);
  v13 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v12 + 112LL))(
          *v12,
          v19,
          0LL,
          1LL,
          0,
          &Src);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  std::make_unique<unsigned char [0],0>(&v18, v4);
  v14 = Src;
  if ( (_DWORD)v4 )
  {
    v15 = v18;
    if ( v18 )
    {
      if ( Src )
      {
        memcpy_0(v18, Src, v4);
        goto LABEL_9;
      }
      memset_0(v18, 0, v4);
    }
    *(_DWORD *)_o__errno(v15, v14) = 22;
    invalid_parameter_noinfo();
  }
LABEL_9:
  v16 = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDeviceContext((__int64)v7, v21);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v16 + 120LL))(*v16, v19, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v21);
  std::shared_ptr<void>::shared_ptr<void>(a1, (__int64 *)&v18);
  std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(&v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a3);
  return a1;
}

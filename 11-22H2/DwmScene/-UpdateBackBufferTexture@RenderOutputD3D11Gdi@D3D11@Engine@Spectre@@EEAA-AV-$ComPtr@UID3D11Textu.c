/*
 * XREFs of ?UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAF50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C9D80 (-GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AW4DXGI_FORMAT@@XZ @ 0x1800C9DDC (-GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::UpdateBackBufferTexture(
        Spectre::Engine::D3D11::RenderOutputD3D11 *a1,
        __int64 *a2)
{
  _QWORD *Device; // rax
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  ULONG_PTR v7; // rbx
  Spectre::Engine::D3D11::RenderDeviceD3D11 **RendererD3D11; // rax
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-C0h]
  __int64 *v12; // [rsp+48h] [rbp-B8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v14[12]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v12 = a2;
  v14[9] = 0;
  v14[3] = 1;
  v14[8] = 32;
  v14[4] = Spectre::Engine::D3D11::RenderOutputD3D11::GetDxgiFormat(a1);
  v14[0] = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)a1 + 80LL))(a1);
  v14[1] = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)a1 + 88LL))(a1);
  v14[2] = 1;
  v14[5] = 1;
  v14[6] = 0;
  v14[10] = 512;
  v14[7] = 0;
  *a2 = 0LL;
  Device = Spectre::Engine::D3D11::RenderOutputD3D11::GetDevice((__int64)a1, &v10);
  v5 = *Device;
  v6 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*Device + 40LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  v7 = v6(v5, v14, 0LL, a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  RendererD3D11 = (Spectre::Engine::D3D11::RenderDeviceD3D11 **)Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(
                                                                  (__int64)a1,
                                                                  &v10);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(*RendererD3D11, v7);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( (v7 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v7;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a2;
}

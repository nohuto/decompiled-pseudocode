/*
 * XREFs of ?CheckMultisamplingResolveSupport@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAA_NXZ @ 0x1800C4BFC
 * Callers:
 *     ?InitialiseAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800C5BAC (-InitialiseAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::CheckMultisamplingResolveSupport(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  _QWORD *Device; // rax
  ULONG_PTR v2; // rbx
  int v4; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-C0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = 0;
  Device = (_QWORD *)Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(this, &v5);
  v2 = (*(int (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*Device + 232LL))(*Device, 87LL, &v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  if ( (v2 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (v4 & 0x240000) == 2359296;
}

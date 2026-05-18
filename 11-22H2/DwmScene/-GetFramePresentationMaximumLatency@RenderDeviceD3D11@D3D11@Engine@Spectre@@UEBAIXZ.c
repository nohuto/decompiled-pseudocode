/*
 * XREFs of ?GetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEBAIXZ @ 0x1800C58D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDXGIDevice3@@@?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIDevice3@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2FE4 (--$As@UIDXGIDevice3@@@-$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIDXG.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::GetFramePresentationMaximumLatency(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  _QWORD *Device; // rax
  int v2; // eax
  ULONG_PTR v3; // rbx
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-79h] BYREF
  __int64 v7; // [rsp+28h] [rbp-71h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-69h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-59h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = -1;
  v7 = 0LL;
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)this, v8);
  Microsoft::WRL::ComPtr<ID3D11Device1>::As<IDXGIDevice3>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))Device,
    &v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
  if ( v7 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 104LL))(v7, &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
  v4 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return v4;
}

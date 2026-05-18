/*
 * XREFs of ?GetAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXAEAI0@Z @ 0x1800C56D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?InitialiseAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800C5BAC (-InitialiseAntialiasingSettings@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::GetAntialiasingSettings(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v6; // r9d
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // r9d
  _QWORD *Device; // rax
  ULONG_PTR v11; // r14
  int v12; // eax
  int v13; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-E0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  Spectre::Engine::D3D11::RenderDeviceD3D11::InitialiseAntialiasingSettings(this);
  *a2 = 1;
  *a3 = 0;
  v6 = *((_DWORD *)this + 105);
  if ( v6 != 1 )
  {
    v7 = 2;
    v8 = v6 - 2;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v7 = 8;
        else
          v7 = 1;
      }
      else
      {
        v7 = 4;
      }
    }
    while ( v7 )
    {
      v13 = 0;
      Device = (_QWORD *)Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(this, &v14);
      v11 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, int *))(*(_QWORD *)*Device + 240LL))(
              *Device,
              10LL,
              v7,
              &v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      if ( (v11 & 0x80000000) != 0LL )
      {
        memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v11;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      v12 = v13;
      if ( v13 )
      {
        *a2 = v7;
        *a3 = v12 - 1;
        return;
      }
      --v7;
    }
  }
}

/*
 * XREFs of ?IsHardware@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NXZ @ 0x1800C69A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@XZ @ 0x1800C568C (-GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UIDXGIAdapter1@@@WRL@Microso.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::IsHardware(Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  _QWORD *Adapter; // rax
  __int64 v3[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v4[320]; // [rsp+30h] [rbp-158h] BYREF

  Adapter = Spectre::Engine::D3D11::RenderDeviceD3D11::GetAdapter((__int64)this, v3);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*Adapter + 80LL))(*Adapter, v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
  return (v4[304] & 2) == 0;
}

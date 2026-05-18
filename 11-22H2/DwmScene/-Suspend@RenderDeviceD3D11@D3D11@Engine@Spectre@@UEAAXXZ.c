/*
 * XREFs of ?Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C7630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Flush@CommandList@Engine@Spectre@@QEAAX_N@Z @ 0x18003935C (-Flush@CommandList@Engine@Spectre@@QEAAX_N@Z.c)
 *     ??$As@UIDXGIDevice3@@@?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIDevice3@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2FE4 (--$As@UIDXGIDevice3@@@-$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIDXG.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::Suspend(Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  Spectre::Engine::CommandList *v2; // rcx
  _QWORD *Device; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (Spectre::Engine::CommandList *)*((_QWORD *)this + 34);
  if ( v2 )
    Spectre::Engine::CommandList::Flush(v2);
  v4 = 0LL;
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)this, &v5);
  Microsoft::WRL::ComPtr<ID3D11Device1>::As<IDXGIDevice3>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))Device,
    &v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 136LL))(v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 48LL))(*((_QWORD *)this + 34));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
}

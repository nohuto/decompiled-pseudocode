/*
 * XREFs of ?OnShutdown@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6A50
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::OnShutdown(Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 24));
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *))(*(_QWORD *)this + 8LL))(this);
  Spectre::Engine::RenderDevice::OnShutdown(this);
}

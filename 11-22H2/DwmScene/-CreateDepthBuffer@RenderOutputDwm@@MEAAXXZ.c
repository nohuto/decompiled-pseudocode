/*
 * XREFs of ?CreateDepthBuffer@RenderOutputDwm@@MEAAXXZ @ 0x180011170
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0 (-CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RenderOutputDwm::CreateDepthBuffer(RenderOutputDwm *this)
{
  if ( !(*(unsigned __int8 (__fastcall **)(RenderOutputDwm *))(*(_QWORD *)this + 280LL))(this) )
    Spectre::Engine::D3D11::RenderOutputD3D11::CreateDepthBuffer(this);
}

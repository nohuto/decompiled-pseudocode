/*
 * XREFs of ?Reset@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D0820
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CommandList@Engine@Spectre@@UEAAXXZ @ 0x1800395B0 (-Reset@CommandList@Engine@Spectre@@UEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::Reset(Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  __int64 v2; // rcx

  Spectre::Engine::CommandList::Reset(this);
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 880LL))(v2);
}

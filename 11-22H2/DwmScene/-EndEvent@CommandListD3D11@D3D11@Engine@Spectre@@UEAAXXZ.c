/*
 * XREFs of ?EndEvent@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D0120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::EndEvent(Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}

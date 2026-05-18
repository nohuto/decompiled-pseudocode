/*
 * XREFs of ?FinalizeFlush@CommandListD3D11@D3D11@Engine@Spectre@@MEAAX_N@Z @ 0x1800D0160
 * Callers:
 *     ??1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CFA9C (--1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D0624 (-Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::FinalizeFlush(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        char a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 880LL))(*((_QWORD *)this + 18));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 888LL))(*((_QWORD *)this + 18));
  if ( a2 )
    Spectre::Engine::D3D11::CommandListD3D11::Internal_WaitForOperationHelper(this);
}

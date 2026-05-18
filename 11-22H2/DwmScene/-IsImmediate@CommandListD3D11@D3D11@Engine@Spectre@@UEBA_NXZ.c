/*
 * XREFs of ?IsImmediate@CommandListD3D11@D3D11@Engine@Spectre@@UEBA_NXZ @ 0x1800D0790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::D3D11::CommandListD3D11::IsImmediate(Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 18);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 896LL))(v1) == 0;
  return v2;
}

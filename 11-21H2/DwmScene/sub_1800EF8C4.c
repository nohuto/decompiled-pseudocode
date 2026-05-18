/*
 * XREFs of sub_1800EF8C4 @ 0x1800EF8C4
 * Callers:
 *     sub_1800EF920 @ 0x1800EF920 (sub_1800EF920.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800EF8C4(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  v2 = a1[15];
  if ( v2 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_1800AC9A8(a1);
}

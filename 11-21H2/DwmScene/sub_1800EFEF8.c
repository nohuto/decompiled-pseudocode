/*
 * XREFs of sub_1800EFEF8 @ 0x1800EFEF8
 * Callers:
 *     sub_1800EFF50 @ 0x1800EFF50 (sub_1800EFF50.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800EFEF8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  v2 = a1[13];
  if ( v2 )
  {
    a1[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_180099408(a1);
}

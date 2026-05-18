/*
 * XREFs of sub_1800EC3E0 @ 0x1800EC3E0
 * Callers:
 *     sub_1800EC440 @ 0x1800EC440 (sub_1800EC440.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800EC3E0(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  v2 = a1[23];
  if ( v2 )
  {
    a1[23] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_18005BCD0(a1);
}

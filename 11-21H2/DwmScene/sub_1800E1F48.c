/*
 * XREFs of sub_1800E1F48 @ 0x1800E1F48
 * Callers:
 *     sub_1800E1FE0 @ 0x1800E1FE0 (sub_1800E1FE0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E1F48(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  v5 = 0LL;
  v4[0] = a1[12];
  a1[12] = 0LL;
  v4[1] = a1[13];
  a1[13] = 0LL;
  sub_180010910((__int64)v4);
  sub_180010910((__int64)&v5);
  v2 = a1[16];
  if ( v2 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_180029D08(a1);
}

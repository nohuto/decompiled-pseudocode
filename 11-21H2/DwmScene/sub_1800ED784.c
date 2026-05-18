/*
 * XREFs of sub_1800ED784 @ 0x1800ED784
 * Callers:
 *     sub_1800ED8E0 @ 0x1800ED8E0 (sub_1800ED8E0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_1800ED784(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::DepthBufferD3D11::`vftable';
  v2 = a1[14];
  if ( v2 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[15];
  if ( v3 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v8 = 0LL;
  v7[0] = a1[12];
  a1[12] = 0LL;
  v7[1] = a1[13];
  a1[13] = 0LL;
  sub_180010910((__int64)v7);
  sub_180010910((__int64)&v8);
  sub_180010910((__int64)(a1 + 30));
  sub_180010910((__int64)(a1 + 28));
  sub_180010910((__int64)(a1 + 26));
  sub_180010910((__int64)(a1 + 24));
  sub_180010910((__int64)(a1 + 22));
  sub_180010910((__int64)(a1 + 20));
  sub_180010910((__int64)(a1 + 18));
  sub_180010910((__int64)(a1 + 16));
  v4 = a1[15];
  if ( v4 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[14];
  if ( v5 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_18007A0EC(a1);
}

/*
 * XREFs of sub_180088C80 @ 0x180088C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029730 @ 0x180029730 (sub_180029730.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_180054C80 @ 0x180054C80 (sub_180054C80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180088C80(_QWORD *a1)
{
  __int64 v2; // rax
  char result; // al
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180029730((__int64)a1);
  v2 = a1[14];
  if ( !v2 || *(_DWORD *)(v2 + 24) != 2 )
    sub_180054C80(a1 + 15);
  result = sub_180029664((__int64)a1, 1);
  if ( result )
  {
    v4 = (*(__int64 (**)(void))(*a1 + 32LL))();
    sub_18003655C(v4, v7);
    v5 = v7[1];
    for ( i = v7[0]; i != v5; i += 16LL )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 16LL))(a1, i);
    return sub_180013300((__int64)v7);
  }
  return result;
}

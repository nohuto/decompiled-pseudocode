/*
 * XREFs of sub_18005AED8 @ 0x18005AED8
 * Callers:
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800596AC @ 0x1800596AC (sub_1800596AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005AED8(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 *v4; // rax
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_1800596AC(a2, a1);
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v3 + 32) + 8LL))(*(_QWORD *)(v3 + 32), v6);
  sub_180011020((_QWORD *)(a2 + 32), v4);
  if ( v7 )
    sub_180010530(v7);
  return a2;
}

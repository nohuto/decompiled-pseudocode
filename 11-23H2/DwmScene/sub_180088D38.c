/*
 * XREFs of sub_180088D38 @ 0x180088D38
 * Callers:
 *     sub_1800473C0 @ 0x1800473C0 (sub_1800473C0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180088D38(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  _BYTE v9[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_18001246C(&v7, (_QWORD *)(**(_QWORD **)(a1 + 120) + 40LL));
    v3 = v7;
    sub_180011C50(v7 + 72, &v5);
    sub_18002A0C4(v5 + 24, (__int64)v9);
    if ( v6 )
      sub_180010530(v6);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL))(v3, a2);
    sub_180010F54((__int64)v9);
    if ( v8 )
      sub_180010530(v8);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}

/*
 * XREFs of sub_1800D9000 @ 0x1800D9000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_18002CA44 @ 0x18002CA44 (sub_18002CA44.c)
 *     sub_18002CB90 @ 0x18002CB90 (sub_18002CB90.c)
 *     sub_1800C8780 @ 0x1800C8780 (sub_1800C8780.c)
 *     sub_1800C8B38 @ 0x1800C8B38 (sub_1800C8B38.c)
 *     sub_1800CFEF8 @ 0x1800CFEF8 (sub_1800CFEF8.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     sub_1800D97D0 @ 0x1800D97D0 (sub_1800D97D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D9000(__int64 *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 *v4; // rax
  _QWORD *v5; // rbx
  char result; // al
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+60h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+18h] BYREF

  sub_18000E72C(a1 + 65);
  sub_18000E72C(a1 + 66);
  sub_1800D97D0(a1, &v11);
  if ( v11 )
  {
    v2 = 0LL;
    v13 = 0LL;
    v3 = (_QWORD *)sub_180026580(v11);
    sub_18001246C(&v9, v3);
    if ( sub_180011DE0(&v9) )
    {
      sub_1800C8B38(&v8, &v9);
      v4 = sub_1800D048C(v8, &v14);
      sub_1800C8780(&v13, v4);
      sub_18000E72C(&v14);
      sub_1800CFEF8(v8);
      if ( *((_QWORD *)&v8 + 1) )
        sub_180010530(*((__int64 *)&v8 + 1));
      v2 = v13;
    }
    v8 = 0LL;
    sub_18002CB90((__int64)a1, &v8);
    v8 = 0LL;
    sub_18002CA44((__int64)a1, &v8);
    if ( sub_18001070C(&v13) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 880LL))(v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 888LL))(v2);
    }
    if ( v10 )
      sub_180010530(v10);
    sub_18000E72C(&v13);
  }
  if ( v12 )
    sub_180010530(v12);
  v5 = a1 + 67;
  result = sub_180011DE0(a1 + 67);
  if ( result )
  {
    result = (**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5);
    *v5 = 0LL;
    v7 = a1[68];
    a1[68] = 0LL;
    if ( v7 )
      return sub_180010530(v7);
  }
  return result;
}

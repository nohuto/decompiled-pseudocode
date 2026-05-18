/*
 * XREFs of sub_1800C91A0 @ 0x1800C91A0
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
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     sub_1800CFEF8 @ 0x1800CFEF8 (sub_1800CFEF8.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C91A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF

  result = sub_1800C9FBC(a1, &v9);
  if ( v9 )
  {
    v3 = 0LL;
    v11 = 0LL;
    v4 = (_QWORD *)sub_180026580(v9);
    sub_18001246C(&v7, v4);
    if ( sub_180011DE0(&v7) )
    {
      sub_1800C8B38(&v6, &v7);
      v5 = (__int64 *)sub_1800D048C(v6, &v12);
      sub_1800C8780(&v11, v5);
      sub_18000E72C(&v12);
      sub_1800CFEF8(v6);
      if ( *((_QWORD *)&v6 + 1) )
        sub_180010530(*((__int64 *)&v6 + 1));
      v3 = v11;
    }
    v6 = 0LL;
    sub_18002CB90(a1, &v6);
    v6 = 0LL;
    sub_18002CA44(a1, &v6);
    if ( sub_18001070C(&v11) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
    }
    if ( v8 )
      sub_180010530(v8);
    result = sub_18000E72C(&v11);
  }
  if ( v10 )
    return sub_180010530(v10);
  return result;
}

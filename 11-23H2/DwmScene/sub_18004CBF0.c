/*
 * XREFs of sub_18004CBF0 @ 0x18004CBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_18004B9E4 @ 0x18004B9E4 (sub_18004B9E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18004CBF0(_QWORD *a1)
{
  char result; // al
  __int64 *v3; // r9
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD *); // r8
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]

  sub_18004B9E4((__int64)a1, (__int64)&v10);
  result = sub_180011DE0(&v10);
  if ( result )
  {
    result = sub_180011C50((__int64)(a1 + 7), &v13);
    v3 = (__int64 *)a1[13];
    v4 = v3 + 9;
    if ( v3[9] )
    {
      v5 = a1[18];
      if ( v5 && (result = sub_180011A3C(v5)) != 0 )
      {
        v6 = a1[17];
        v7 = a1[18];
      }
      else
      {
        v7 = 0LL;
        v6 = 0LL;
      }
      if ( v6 )
      {
        sub_1800446D8(*v3, (__int64)&unk_1801D7E48, 1);
        v8 = sub_18001246C(&v12, v4);
        result = v9(v6, v8);
      }
      if ( v7 )
        result = sub_180010530(v7);
    }
    if ( v14 )
      result = sub_180010530(v14);
  }
  if ( v11 )
    return sub_180010530(v11);
  return result;
}

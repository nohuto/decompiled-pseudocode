/*
 * XREFs of sub_1800CFC70 @ 0x1800CFC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800CFA2C @ 0x1800CFA2C (sub_1800CFA2C.c)
 *     sub_1800D0568 @ 0x1800D0568 (sub_1800D0568.c)
 *     sub_1800D0664 @ 0x1800D0664 (sub_1800D0664.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CFC70(__int64 a1, _QWORD *a2, unsigned __int8 a3, char a4)
{
  unsigned int v5; // r15d
  __int64 *v7; // rax
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  _QWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  int v19; // [rsp+A0h] [rbp+40h]

  v5 = a3;
  v19 = 0;
  if ( *a2 )
  {
    v7 = (__int64 *)sub_1800D0568(*a2, &v16, *(unsigned int *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v14 = 0LL;
    v7 = &v13;
    v8 = 2;
    v9 = 0LL;
  }
  v15[0] = v9;
  v10 = v7[1];
  v15[1] = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v14 )
      sub_180010530(v14);
  }
  if ( (v8 & 1) != 0 && v17 )
    sub_180010530(v17);
  sub_18001246C(&v16, v15);
  sub_1800CFA2C((__int64)&v13);
  sub_1800D0664(v13, &v18);
  v11 = v5 | 2;
  if ( !a4 )
    v11 = v5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 424LL))(*(_QWORD *)(a1 + 144), v18, v11);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  result = sub_18000E72C(&v18);
  if ( v14 )
    result = sub_180010530(v14);
  if ( v10 )
    return sub_180010530(v10);
  return result;
}

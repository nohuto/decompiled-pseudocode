/*
 * XREFs of sub_1800A2DA0 @ 0x1800A2DA0
 * Callers:
 *     sub_1800A1248 @ 0x1800A1248 (sub_1800A1248.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026844 @ 0x180026844 (sub_180026844.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1E84 @ 0x1800A1E84 (sub_1800A1E84.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800A2DA0(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  char result; // al
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  _QWORD v13[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v15[22]; // [rsp+48h] [rbp-59h] BYREF

  v2 = (__int64 *)sub_180026844(*(_QWORD *)(a1 + 912), (__int64)v15, 1u);
  sub_1800A1CB4(a1 + 528, v2);
  sub_1800A1C58(v15);
  if ( sub_1800A1DF4() )
  {
    sub_18001246C(v13, (_QWORD *)(a1 + 896));
    v4 = sub_18001246C(v14, v3);
    sub_1800A1E84(a1 + 528, v4, v5);
  }
  if ( sub_1800A1DF4() )
  {
    sub_18001246C(v14, (_QWORD *)(a1 + 896));
    v7 = sub_18001246C(v13, v6);
    sub_1800A1E84(a1 + 704, v7, v8);
  }
  result = sub_1800A1DF4();
  if ( result )
  {
    sub_18001246C(v14, (_QWORD *)(a1 + 896));
    v11 = sub_18001246C(v13, v10);
    result = sub_1800A1E84(a1, v11, v12);
  }
  *(_DWORD *)(a1 + 920) = 2;
  return result;
}

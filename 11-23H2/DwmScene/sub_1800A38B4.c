/*
 * XREFs of sub_1800A38B4 @ 0x1800A38B4
 * Callers:
 *     sub_1800A14B0 @ 0x1800A14B0 (sub_1800A14B0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026844 @ 0x180026844 (sub_180026844.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1E84 @ 0x1800A1E84 (sub_1800A1E84.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800A38B4(__int64 a1)
{
  __int64 *v2; // rax
  char result; // al
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = (__int64 *)sub_180026844(*(_QWORD *)(a1 + 912), (__int64)v9, 1u);
  sub_1800A1CB4(a1 + 352, v2);
  sub_1800A1C58(v9);
  result = sub_1800A1DF4();
  if ( result )
  {
    sub_18001246C(&v7, (_QWORD *)(a1 + 896));
    v5 = sub_18001246C(&v8, v4);
    return sub_1800A1E84(a1 + 352, v5, v6);
  }
  return result;
}

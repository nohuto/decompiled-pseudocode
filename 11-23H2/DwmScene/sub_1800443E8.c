/*
 * XREFs of sub_1800443E8 @ 0x1800443E8
 * Callers:
 *     sub_18009ABE0 @ 0x18009ABE0 (sub_18009ABE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800443C4 @ 0x1800443C4 (sub_1800443C4.c)
 *     sub_18008301C @ 0x18008301C (sub_18008301C.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800443E8(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  unsigned __int16 v3; // r9
  __int64 v4; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = (_QWORD *)sub_1800443C4(a1, &v8);
  v2 = (_QWORD *)sub_180085130(*v1, v6);
  v4 = sub_18008301C(*v2, v3);
  if ( v7 )
    sub_180010530(v7);
  if ( v9 )
    sub_180010530(v9);
  return v4;
}

/*
 * XREFs of sub_180044358 @ 0x180044358
 * Callers:
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 *     sub_18009ABE0 @ 0x18009ABE0 (sub_18009ABE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800443C4 @ 0x1800443C4 (sub_1800443C4.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 *     sub_180085130 @ 0x180085130 (sub_180085130.c)
 */

__int64 __fastcall sub_180044358(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // bx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)sub_1800443C4(a1, v10, a3, a2);
  v4 = (_QWORD *)sub_180085130(*v3, v8);
  v6 = sub_180082CD8(*v4, v5);
  if ( v9 )
    sub_180010530(v9);
  if ( v11 )
    sub_180010530(v11);
  return v6;
}

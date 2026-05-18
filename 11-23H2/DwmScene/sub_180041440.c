/*
 * XREFs of sub_180041440 @ 0x180041440
 * Callers:
 *     sub_180040814 @ 0x180040814 (sub_180040814.c)
 *     sub_1800408A8 @ 0x1800408A8 (sub_1800408A8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 */

_QWORD *__fastcall sub_180041440(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  _QWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF

  v2 = sub_180012440(v11, (__int64)&unk_1801D3F88);
  sub_18004093C(a1, &v9, v2);
  if ( v10 )
    sub_180010530(v10);
  v3 = sub_180012440(v11, (__int64)&unk_1801D3F68);
  sub_18004093C(a1, &v9, v3);
  if ( v10 )
    sub_180010530(v10);
  v4 = sub_180012440(v11, (__int64)&unk_1801D4008);
  sub_18004093C(a1, &v9, v4);
  if ( v10 )
    sub_180010530(v10);
  v5 = sub_180012440(v11, (__int64)&qword_1801D3FE8);
  sub_18004093C(a1, &v9, v5);
  if ( v10 )
    sub_180010530(v10);
  v6 = sub_180012440(v11, (__int64)&unk_1801D3FA8);
  sub_18004093C(a1, &v9, v6);
  if ( v10 )
    sub_180010530(v10);
  v7 = sub_180012440(v11, (__int64)&unk_1801D3FC8);
  result = sub_18004093C(a1, &v9, v7);
  if ( v10 )
    return (_QWORD *)sub_180010530(v10);
  return result;
}

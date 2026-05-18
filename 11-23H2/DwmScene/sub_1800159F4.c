/*
 * XREFs of sub_1800159F4 @ 0x1800159F4
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 *     sub_180037E5C @ 0x180037E5C (sub_180037E5C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800159F4(__int64 *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v15[6]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[152]; // [rsp+F8h] [rbp-8h] BYREF

  v15[0] = *a2;
  v15[1] = a2[1];
  v15[2] = a2[2];
  v15[3] = a2[3];
  v15[4] = a2[4];
  v15[5] = a2[5];
  sub_180037E5C(v16, v15);
  sub_18001246C(&v13, a4);
  v7 = sub_18001246C(v14, a3);
  v12 = 0LL;
  sub_18001568C(a1, (__int64)v16, &v12, v7, v8);
  sub_1800179FC(v17);
  v9 = a3[1];
  if ( v9 )
    sub_180010530(v9);
  v10 = a4[1];
  if ( v10 )
    sub_180010530(v10);
  return a1;
}

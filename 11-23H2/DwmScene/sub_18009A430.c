/*
 * XREFs of sub_18009A430 @ 0x18009A430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_1800983E8 @ 0x1800983E8 (sub_1800983E8.c)
 *     sub_18009BC14 @ 0x18009BC14 (sub_18009BC14.c)
 */

// Hidden C++ exception states: #wind=12
_QWORD *__fastcall sub_18009A430(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _BYTE *v16; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+28h] [rbp-D8h]
  _QWORD *v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v22[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v23[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v24[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v25[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v26[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v27[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v28[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v29[4]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v30[5]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v31[64]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v32[64]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v33[64]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v34[64]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v35[64]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v36[64]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v37[64]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v38[64]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v39[64]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v40[64]; // [rsp+400h] [rbp+300h] BYREF
  _BYTE v41[64]; // [rsp+440h] [rbp+340h] BYREF
  _QWORD v42[2]; // [rsp+480h] [rbp+380h] BYREF

  v19[2] = a2;
  v17 = 0;
  v3 = sub_180017648(v20, (__int64)&unk_1801D6D88);
  sub_180044E50((__int64)v31, (__int64)v3, 8);
  v4 = sub_180017648(v21, (__int64)&unk_1801D6CC8);
  sub_180044E50((__int64)v32, (__int64)v4, 6);
  v5 = sub_180017648(v22, (__int64)&unk_1801D6DC8);
  sub_180044E50((__int64)v33, (__int64)v5, 8);
  v6 = sub_180017648(v23, (__int64)&unk_1801D6CE8);
  sub_180044E50((__int64)v34, (__int64)v6, 6);
  v7 = sub_180017648(v24, (__int64)&unk_1801D6DA8);
  sub_180044E50((__int64)v35, (__int64)v7, 8);
  v8 = sub_180017648(v25, (__int64)&unk_1801D6D28);
  sub_180044E50((__int64)v36, (__int64)v8, 5);
  v9 = sub_180017648(v26, (__int64)&unk_1801D6DE8);
  sub_180044E50((__int64)v37, (__int64)v9, 8);
  v10 = sub_180017648(v27, (__int64)&unk_1801D6D68);
  sub_180044E50((__int64)v38, (__int64)v10, 6);
  v11 = sub_180017648(v28, (__int64)&unk_1801D6E28);
  sub_180044E50((__int64)v39, (__int64)v11, 8);
  v12 = sub_180017648(v29, (__int64)&unk_1801D6D48);
  sub_180044E50((__int64)v40, (__int64)v12, 2);
  v13 = sub_180017648(v30, (__int64)&unk_1801D6EC8);
  sub_180044E50((__int64)v41, (__int64)v13, 2);
  v19[0] = v31;
  v19[1] = v42;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v18 = v42;
  v16 = v31;
  v14 = sub_18009BC14(v19);
  sub_1800983E8(a2, v14, &v16, &v18);
  v17 = 1;
  sub_18000B4B0((__int64)v31, 64LL, 11LL);
  return a2;
}

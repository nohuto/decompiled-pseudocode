/*
 * XREFs of sub_1800AB310 @ 0x1800AB310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_1800A8F64 @ 0x1800A8F64 (sub_1800A8F64.c)
 */

// Hidden C++ exception states: #wind=13
__int64 *__fastcall sub_1800AB310(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v16[4]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v20[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v21[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v23[4]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v24[4]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v25[4]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v26[5]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v27[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v28[64]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v29[64]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v30[64]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v31[64]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v32[64]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v33[64]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v34[64]; // [rsp+360h] [rbp+260h] BYREF
  _BYTE v35[64]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v36[64]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _BYTE v37[64]; // [rsp+420h] [rbp+320h] BYREF
  __int64 v38; // [rsp+460h] [rbp+360h] BYREF

  v3 = sub_18001875C(v16, (__int64)&qword_1801F4C78);
  sub_18004A344((__int64)v27, (__int64)v3, 8);
  v4 = sub_18001875C(v17, (__int64)&qword_1801F5DB8);
  sub_18004A344((__int64)v28, (__int64)v4, 6);
  v5 = sub_18001875C(v18, (__int64)&qword_1801F4CB8);
  sub_18004A344((__int64)v29, (__int64)v5, 8);
  v6 = sub_18001875C(v19, (__int64)&qword_1801F5CD8);
  sub_18004A344((__int64)v30, (__int64)v6, 6);
  v7 = sub_18001875C(v20, (__int64)&qword_1801F4C98);
  sub_18004A344((__int64)v31, (__int64)v7, 8);
  v8 = sub_18001875C(v21, (__int64)&qword_1801F5CF8);
  sub_18004A344((__int64)v32, (__int64)v8, 5);
  v9 = sub_18001875C(v22, (__int64)&qword_1801F4CD8);
  sub_18004A344((__int64)v33, (__int64)v9, 8);
  v10 = sub_18001875C(v23, (__int64)&qword_1801F5DD8);
  sub_18004A344((__int64)v34, (__int64)v10, 6);
  v11 = sub_18001875C(v24, (__int64)&qword_1801F4D18);
  sub_18004A344((__int64)v35, (__int64)v11, 8);
  v12 = sub_18001875C(v25, (__int64)&qword_1801F5D18);
  sub_18004A344((__int64)v36, (__int64)v12, 2);
  v13 = sub_18001875C(v26, (__int64)&qword_1801F5D58);
  sub_18004A344((__int64)v37, (__int64)v13, 2);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v14 = sub_180011088(0x2C0uLL);
  *a2 = v14;
  a2[1] = v14;
  a2[2] = v14 + 704;
  a2[1] = sub_1800A8F64((__int64)v27, (__int64)&v38, *a2);
  sub_18000B4C0((__int64)v27, 64LL, 11LL);
  return a2;
}

/*
 * XREFs of sub_1800D5D0C @ 0x1800D5D0C
 * Callers:
 *     sub_1800D635C @ 0x1800D635C (sub_1800D635C.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_1800CD0D4 @ 0x1800CD0D4 (sub_1800CD0D4.c)
 *     sub_1800D5B0C @ 0x1800D5B0C (sub_1800D5B0C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800D5D0C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // r12
  __int64 v10; // rbx
  _QWORD *v11; // rax
  void **v12; // rax
  __int64 v14; // [rsp+20h] [rbp-69h] BYREF
  __int64 v15; // [rsp+28h] [rbp-61h]
  __int64 v16; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h]
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+58h] [rbp-31h]
  __int64 *v20; // [rsp+60h] [rbp-29h]
  __int64 *v21; // [rsp+68h] [rbp-21h]
  __int64 v22; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v23[4]; // [rsp+80h] [rbp-9h] BYREF

  v20 = a2;
  v21 = a3;
  sub_180011C50((__int64)(a1 + 9), &v18);
  v6 = sub_180015EE4(v18, &v16);
  sub_180011020(a1 + 12, v6);
  if ( v17 )
    sub_180010530(v17);
  sub_18001246C(&v22, a1 + 12);
  sub_180017600((__int64)&v16);
  v14 = *a3;
  sub_180011520(&v14);
  sub_1800CD0D4(v16, &v14, 5u);
  v7 = sub_180026618(v18);
  v8 = sub_180016268(v7, &v14);
  v9 = a1 + 16;
  sub_180011020(a1 + 16, v8);
  if ( v15 )
    sub_180010530(v15);
  v10 = *v9;
  v11 = sub_18002963C((__int64)a1, v23);
  v12 = (void **)sub_18001C61C(&v14, v11, (__int64)"Shared Texture");
  sub_180029824(v10, v12);
  sub_180011B24((__int64)v23);
  sub_180055DE8(*v9, a1 + 12);
  sub_1800D5B0C(a1 + 14, a2);
  if ( v17 )
    sub_180010530(v17);
  if ( v19 )
    sub_180010530(v19);
  sub_18000E72C(a2);
  return sub_18000E72C(a3);
}

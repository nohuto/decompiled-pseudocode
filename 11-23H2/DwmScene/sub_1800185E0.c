/*
 * XREFs of sub_1800185E0 @ 0x1800185E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180016A48 @ 0x180016A48 (sub_180016A48.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 */

__int64 __fastcall sub_1800185E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+40h] BYREF

  sub_180016268(*(_QWORD *)(a1 + 56), &v19);
  v8 = (__int64 *)sub_1800341C8(*(_QWORD *)(a1 + 56), &v17, 1LL);
  sub_180015EE4(*v8, &v21);
  if ( v18 )
    sub_180010530(v18);
  sub_18001246C(&v15, &v21);
  sub_180017600((__int64)&v17);
  v26 = a2;
  sub_180011520(&v26);
  v25 = a3;
  sub_180011520(&v25);
  v14 = a3;
  sub_180011520(&v14);
  v15 = a2;
  sub_180011520(&v15);
  sub_1800CD128(v17, &v15, &v14, 1LL);
  sub_180011DA0(&v15, &v17);
  sub_180055DE8(v9, &v15, 1LL);
  if ( v16 )
    sub_180010530(v16);
  v24 = 0LL;
  v10 = sub_180016A48(&v24, (__int64)&v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = v24;
    v24 = 0LL;
    *a4 = v13;
    sub_18000E72C(&v24);
    sub_18000E72C(&v25);
    sub_18000E72C(&v26);
    if ( v18 )
      sub_180010530(v18);
    if ( v22 )
      sub_180010530(v22);
    if ( v20 )
      sub_180010530(v20);
    return 0LL;
  }
  else
  {
    sub_18000F024(
      retaddr,
      386LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v10);
    sub_18000E72C(&v24);
    sub_18000E72C(&v25);
    sub_18000E72C(&v26);
    if ( v18 )
      sub_180010530(v18);
    if ( v22 )
      sub_180010530(v22);
    if ( v20 )
      sub_180010530(v20);
    return v11;
  }
}

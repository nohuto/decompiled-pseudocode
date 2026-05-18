/*
 * XREFs of sub_180014CA0 @ 0x180014CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180014AC4 @ 0x180014AC4 (sub_180014AC4.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_1800403BC @ 0x1800403BC (sub_1800403BC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180014CA0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+18h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = (_QWORD *)(a1 + 32);
  sub_18001265C(*(_QWORD *)(a1 + 32), &v12);
  v4 = v12;
  sub_18002A0C4(v12 + 16, v14);
  v5 = sub_18001246C(&v15, v3);
  sub_1800403BC(v4, v10, -1LL, v5);
  v17 = 0LL;
  v6 = sub_180014AC4(&v17, (__int64)v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v17;
    v17 = 0LL;
    *a2 = v9;
    sub_18000E72C(&v17);
    if ( v11 )
      sub_180010530(v11);
    sub_180010F54((__int64)v14);
    if ( v13 )
      sub_180010530(v13);
    return 0LL;
  }
  else
  {
    sub_18000F024(
      retaddr,
      82LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (unsigned int)v6);
    sub_18000E72C(&v17);
    if ( v11 )
      sub_180010530(v11);
    sub_180010F54((__int64)v14);
    if ( v13 )
      sub_180010530(v13);
    return v7;
  }
}

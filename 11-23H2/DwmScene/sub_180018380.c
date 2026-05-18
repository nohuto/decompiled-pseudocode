/*
 * XREFs of sub_180018380 @ 0x180018380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001667C @ 0x18001667C (sub_18001667C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 */

__int64 __fastcall sub_180018380(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  _QWORD v12[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+8h]
  __int64 v14; // [rsp+70h] [rbp+10h] BYREF

  v3 = sub_180034870(*(_QWORD *)(a1 + 56));
  sub_180017648(v12, v3 + 18496);
  sub_1800502A4(v3, &v10, v12);
  sub_180060148(v10, &v8);
  v14 = 0LL;
  v4 = sub_18001667C(&v14, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v14;
    v14 = 0LL;
    *a2 = v7;
    sub_18000E72C(&v14);
    if ( v9 )
      sub_180010530(v9);
    if ( v11 )
      sub_180010530(v11);
    return 0LL;
  }
  else
  {
    sub_18000F024(
      retaddr,
      335LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000E72C(&v14);
    if ( v9 )
      sub_180010530(v9);
    if ( v11 )
      sub_180010530(v11);
    return v5;
  }
}

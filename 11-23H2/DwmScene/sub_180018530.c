/*
 * XREFs of sub_180018530 @ 0x180018530
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_18001690C @ 0x18001690C (sub_18001690C.c)
 */

__int64 __fastcall sub_180018530(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  sub_1800161AC(*(_QWORD *)(a1 + 56), &v7);
  v10 = 0LL;
  v3 = sub_18001690C(&v10, (__int64)&v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v10;
    v10 = 0LL;
    *a2 = v6;
    sub_18000E72C(&v10);
    if ( v8 )
      sub_180010530(v8);
    return 0LL;
  }
  else
  {
    sub_18000F024(
      retaddr,
      361LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v3);
    sub_18000E72C(&v10);
    if ( v8 )
      sub_180010530(v8);
    return v4;
  }
}

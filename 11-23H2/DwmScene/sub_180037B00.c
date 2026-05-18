/*
 * XREFs of sub_180037B00 @ 0x180037B00
 * Callers:
 *     sub_18006DDA0 @ 0x18006DDA0 (sub_18006DDA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_1800349DC @ 0x1800349DC (sub_1800349DC.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180074440 @ 0x180074440 (sub_180074440.c)
 *     sub_180074458 @ 0x180074458 (sub_180074458.c)
 *     sub_180074634 @ 0x180074634 (sub_180074634.c)
 *     sub_180074828 @ 0x180074828 (sub_180074828.c)
 *     sub_1800748C4 @ 0x1800748C4 (sub_1800748C4.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180037B00(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 *v7; // r15
  __int64 *v8; // rbx
  __int64 v9; // r12
  _OWORD *v10; // rax
  __int64 v11; // rax
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v22[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v23[8]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v24[3]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v25[4]; // [rsp+170h] [rbp+70h] BYREF

  v2 = a1 + 58;
  v3 = sub_18001246C(&v14, a1 + 58);
  sub_18001FD9C(
    v23,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes");
  sub_180010DD0(v25, (__int64)"UpdateScenes");
  v4 = sub_1800340DC((__int64)a1, &v16);
  sub_180015604(&v13, v4);
  sub_180030FD4(v21, (__int64)&v13);
  if ( *((_QWORD *)&v13 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v13 + 1));
  if ( v17 )
    sub_180010530(v17);
  sub_180011B24((__int64)v25);
  v5 = sub_18001246C(&v14, v2);
  sub_18001FD9C(
    v22,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame");
  sub_180010DD0(v24, (__int64)"kSpectreRenderCB_BeginFrame");
  v6 = sub_1800340DC((__int64)a1, &v18);
  sub_180015604(&v13, v6);
  sub_180030FD4(v20, (__int64)&v13);
  if ( *((_QWORD *)&v13 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v13 + 1));
  if ( v19 )
    sub_180010530(v19);
  sub_180011B24((__int64)v24);
  *(_QWORD *)&v14 = a1[121];
  DWORD2(v14) = 0;
  sub_180011CA0(&v15);
  sub_1800A0450(v14, &v14);
  v14 = 0LL;
  v13 = 0LL;
  sub_180034EC0((__int64)a1, 0, (__int64)&v13, &v14);
  sub_180031CF0((__int64)v20);
  sub_18001FEA4((__int64)v22);
  v7 = (__int64 *)a1[89];
  v8 = (__int64 *)a1[88];
  if ( v8 != v7 )
  {
    v9 = sub_180074440(a1 + 46);
    do
    {
      v10 = (_OWORD *)sub_180074634(v9);
      v24[0] = *v10;
      v24[1] = v10[1];
      v24[2] = v10[2];
      v11 = sub_180074634(a1 + 25);
      if ( sub_1800349DC(v11) && !sub_1800349DC((__int64)v24) )
        sub_1800748C4(a1 + 25, v24);
      sub_180074458(a1 + 46, a1 + 25);
      sub_180037678(a1, v8);
      v8 += 2;
    }
    while ( v8 != v7 );
  }
  sub_180074828(a1 + 25);
  sub_180031CF0((__int64)v21);
  return sub_18001FEA4((__int64)v23);
}

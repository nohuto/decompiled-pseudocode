/*
 * XREFs of sub_1800363BC @ 0x1800363BC
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 *     sub_1800579F8 @ 0x1800579F8 (sub_1800579F8.c)
 *     sub_180057BA8 @ 0x180057BA8 (sub_180057BA8.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800363BC(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *i; // rbx
  __int64 v7; // [rsp+48h] [rbp-59h] BYREF
  volatile signed __int32 *v8; // [rsp+50h] [rbp-51h]
  __int64 v9; // [rsp+58h] [rbp-49h] BYREF
  __int64 v10; // [rsp+60h] [rbp-41h]
  __int64 v11[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v12[8]; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v13[4]; // [rsp+C8h] [rbp+27h] BYREF

  v2 = sub_18001246C(&v7, (_QWORD *)(a1 + 464));
  sub_18001FD9C(
    v12,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays");
  sub_180010DD0(v13, (__int64)"RenderDisplays");
  v3 = sub_1800340DC(a1, &v9);
  sub_180015604(&v7, v3);
  sub_180030FD4(v11, (__int64)&v7);
  if ( v8 )
    sub_180010574(v8);
  if ( v10 )
    sub_180010530(v10);
  sub_180011B24((__int64)v13);
  v4 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800579F8(i[2]) == 1 )
      sub_180057BA8(i[2]);
  }
  sub_180034F98(a1);
  sub_180031CF0((__int64)v11);
  return sub_18001FEA4((__int64)v12);
}

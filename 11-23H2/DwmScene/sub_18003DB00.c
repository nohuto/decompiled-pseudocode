/*
 * XREFs of sub_18003DB00 @ 0x18003DB00
 * Callers:
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_1800189B4 @ 0x1800189B4 (sub_1800189B4.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003DD74 @ 0x18003DD74 (sub_18003DD74.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003DB00(_DWORD *a1, __int64 a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __int128 *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  __int64 v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h]
  _OWORD v12[4]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v13[4]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v14[4]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  if ( *sub_180012624((__int64)a1, &v8) )
  {
    v5 = sub_180012624((__int64)a1, &v10);
    v4 = 1;
    v6 = sub_18003C72C(*v5, v14);
  }
  else
  {
    v12[0] = xmmword_180106A40;
    v12[1] = xmmword_180106A50;
    v12[2] = xmmword_180106A60;
    v12[3] = xmmword_180106A70;
    v6 = v12;
  }
  v13[0] = *v6;
  v13[1] = v6[1];
  v13[2] = v6[2];
  v13[3] = v6[3];
  if ( (v4 & 1) != 0 && v11 )
    sub_180010530(v11);
  if ( v9 )
    sub_180010530(v9);
  sub_1800189B4(v13, (__int64)v12);
  sub_18003DD74(&v8, a2, v12);
  v10 = v8;
  LODWORD(v11) = v9;
  return sub_180012ED8(a1, &v10);
}

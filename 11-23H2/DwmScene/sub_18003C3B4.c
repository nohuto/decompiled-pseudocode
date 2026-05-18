/*
 * XREFs of sub_18003C3B4 @ 0x18003C3B4
 * Callers:
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_180069750 @ 0x180069750 (sub_180069750.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_1800958C0 @ 0x1800958C0 (sub_1800958C0.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003DD74 @ 0x18003DD74 (sub_18003DD74.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003C3B4(__int64 a1, __int64 a2)
{
  char v4; // si
  _QWORD *v5; // rax
  _OWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  __int64 v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h]
  _OWORD v12[4]; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v13[4]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v14[64]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  sub_18003E330(a1);
  if ( *sub_180012624(a1, &v10) )
  {
    v5 = sub_180012624(a1, &v8);
    v4 = 1;
    v6 = (_OWORD *)sub_18003C72C(*v5, v14);
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
  if ( (v4 & 1) != 0 && v9 )
    sub_180010530(v9);
  if ( v11 )
    sub_180010530(v11);
  sub_18003DD74(a2, a1 + 144, v13);
  return a2;
}

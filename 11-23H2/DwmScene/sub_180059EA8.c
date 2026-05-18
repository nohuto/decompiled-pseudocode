/*
 * XREFs of sub_180059EA8 @ 0x180059EA8
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180097934 @ 0x180097934 (sub_180097934.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180058A08 @ 0x180058A08 (sub_180058A08.c)
 *     sub_1800596AC @ 0x1800596AC (sub_1800596AC.c)
 *     sub_18005D470 @ 0x18005D470 (sub_18005D470.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180059EA8(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-1h] BYREF
  char v13[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 v16; // [rsp+80h] [rbp+37h]
  __int128 v17; // [rsp+88h] [rbp+3Fh] BYREF

  v17 = 0LL;
  v13[0] = 1;
  v14 = a2;
  v15 = a3;
  v16 = a5;
  sub_1800124F8((__int64 *)&v17, a4);
  if ( a1[14] == a1[15] )
  {
    sub_180058A08(a1 + 13, a1[14], (__int64)v13);
  }
  else
  {
    sub_1800596AC(a1[14], (__int64)v13);
    a1[14] += 48LL;
  }
  v7 = -1431655765 * ((a1[14] - a1[13]) >> 4) - 1;
  v8 = sub_180017648(v12, (__int64)&unk_1801D7268);
  v11[0] = COERCE_UNSIGNED_INT((float)(int)v7);
  v11[1] = 0LL;
  sub_18005D470(a1, v8, v11, v7);
  if ( *((_QWORD *)&v17 + 1) )
    sub_180010530(*((__int64 *)&v17 + 1));
  v9 = a4[1];
  if ( v9 )
    sub_180010530(v9);
  return v7;
}

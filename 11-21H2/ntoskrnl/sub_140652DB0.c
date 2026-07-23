/*
 * XREFs of sub_140652DB0 @ 0x140652DB0
 * Callers:
 *     sub_140A087A4 @ 0x140A087A4 (sub_140A087A4.c)
 * Callees:
 *     sub_1406528CC @ 0x1406528CC (sub_1406528CC.c)
 *     sub_140652E20 @ 0x140652E20 (sub_140652E20.c)
 */

__int64 sub_140652DB0()
{
  __int64 v0; // rcx
  int v1; // r8d
  _BYTE v3[9]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+29h] [rbp-Fh]
  __int16 v5; // [rsp+2Ah] [rbp-Eh]
  int v6; // [rsp+2Ch] [rbp-Ch]
  __int16 v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+4Ah] [rbp+12h]

  v7 = 0;
  v8 = 0;
  if ( !sub_1406528CC((__int64)&xmmword_140C10CA0) )
    return 3221225473LL;
  *(_QWORD *)v3 = 14614528LL;
  v6 = v1;
  *(_WORD *)&v3[7] = 311;
  v4 = 0;
  v5 = 5;
  return sub_140652E20(v0, v3, &v7);
}

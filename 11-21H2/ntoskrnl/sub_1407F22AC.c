/*
 * XREFs of sub_1407F22AC @ 0x1407F22AC
 * Callers:
 *     sub_1407F2244 @ 0x1407F2244 (sub_1407F2244.c)
 *     sub_1407FFBAC @ 0x1407FFBAC (sub_1407FFBAC.c)
 *     sub_140995B08 @ 0x140995B08 (sub_140995B08.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407F2400 @ 0x1407F2400 (sub_1407F2400.c)
 *     sub_1407F27A8 @ 0x1407F27A8 (sub_1407F27A8.c)
 *     sub_140809508 @ 0x140809508 (sub_140809508.c)
 */

__int64 __fastcall sub_1407F22AC(_QWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  int v8; // ebx
  __int128 v10; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v11[24]; // [rsp+58h] [rbp+7h]
  _OWORD v12[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+90h] [rbp+3Fh]

  v5 = (int)a1;
  v12[0] = xmmword_140C20BD0;
  *(_QWORD *)v11 = ++qword_140C20BC0;
  v13 = qword_140C20BF0;
  LODWORD(v10) = 5;
  *((_QWORD *)&v10 + 1) = a4;
  DWORD1(v10) = (_DWORD)a1;
  *(_OWORD *)&v11[8] = 0LL;
  v12[1] = xmmword_140C20BE0;
  if ( (unsigned int)((_DWORD)a1 - 1) <= 9 && a3 <= 2 && (a1 = qword_140D3BDB0, qword_140D3BDB0[v5]) )
  {
    v8 = sub_14042A5E0(&qword_140C20BC0, &v10);
    if ( v8 >= 0 )
    {
      xmmword_140C20BD0 = v10;
      qword_140C20BF0 = *(_QWORD *)&v11[16];
      xmmword_140C20BE0 = *(_OWORD *)v11;
      if ( (unsigned __int8)sub_1407F27A8() )
      {
        v8 = 0;
      }
      else
      {
        v8 = 259;
        sub_140809508(&qword_140C20BC0);
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  sub_1407F2400((_DWORD)a1, v5, a2, a3, a4, (__int64)v12, (__int64)&v10, v8);
  return (unsigned int)v8;
}

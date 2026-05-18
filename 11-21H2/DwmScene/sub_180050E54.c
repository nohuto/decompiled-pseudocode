/*
 * XREFs of sub_180050E54 @ 0x180050E54
 * Callers:
 *     sub_180050C00 @ 0x180050C00 (sub_180050C00.c)
 * Callees:
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 */

char *__fastcall sub_180050E54(_QWORD *a1, _QWORD *a2, char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9
  int v6; // eax

  if ( a1 != a2 )
  {
    v4 = a1 + 6;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = 0LL;
      *(_QWORD *)a3 = *(v4 - 6);
      a3 += 88;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = *(v4 - 5);
      *(v4 - 6) = 0LL;
      *(v4 - 5) = 0LL;
      *((_BYTE *)v4 + (_QWORD)v5 - 32) = *((_BYTE *)v4 - 32);
      v6 = *((_DWORD *)v4 - 7);
      *(_QWORD *)&v5[(_QWORD)v4 - 24] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = 0LL;
      *(_DWORD *)&v5[(_QWORD)v4 - 28] = v6;
      *(_QWORD *)&v5[(_QWORD)v4 - 24] = *(v4 - 3);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(v4 - 3) = 0LL;
      *(v4 - 2) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 - 8] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 - 8] = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 8] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 8] = v4[1];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = v4[2];
      v4[1] = 0LL;
      v4[2] = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 24] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 32) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 24] = v4[3];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 32) = v4[4];
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4 += 11;
    }
    while ( v4 - 6 != a2 );
  }
  sub_180050B9C((__int64)a3, (__int64)a3);
  return a3;
}

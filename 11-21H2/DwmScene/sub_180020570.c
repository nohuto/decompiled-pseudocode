/*
 * XREFs of sub_180020570 @ 0x180020570
 * Callers:
 *     sub_180060890 @ 0x180060890 (sub_180060890.c)
 *     sub_1800F7DC4 @ 0x1800F7DC4 (sub_1800F7DC4.c)
 *     sub_1800FA93C @ 0x1800FA93C (sub_1800FA93C.c)
 * Callees:
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 */

_OWORD *__fastcall sub_180020570(_QWORD *a1, _QWORD *a2, _OWORD *a3)
{
  _OWORD *v3; // rbx
  char *v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = (char *)((char *)a3 - (char *)a1);
    v5 = a1 + 3;
    do
    {
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4) = 0LL;
      *v3 = *(_OWORD *)(v5 - 3);
      v3[1] = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 += 2;
      *v5 = 7LL;
      *((_WORD *)v5 - 12) = 0;
      v5 += 4;
    }
    while ( v5 - 3 != a2 );
  }
  sub_18001FF34((__int64)v3, (__int64)v3);
  return v3;
}

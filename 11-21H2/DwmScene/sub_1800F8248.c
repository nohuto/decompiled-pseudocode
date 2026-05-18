/*
 * XREFs of sub_1800F8248 @ 0x1800F8248
 * Callers:
 *     sub_1800F7DC4 @ 0x1800F7DC4 (sub_1800F7DC4.c)
 * Callees:
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 */

_OWORD *__fastcall sub_1800F8248(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  _OWORD *v3; // rbx
  _QWORD *v4; // rax
  char *v5; // r8
  _OWORD *v6; // rcx

  v3 = a3;
  v4 = (_QWORD *)(a1 + 24);
  v5 = (char *)a3 - a1;
  while ( 1 )
  {
    v6 = v4 - 3;
    if ( v4 - 3 == a2 )
      break;
    *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
    *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
    *v3 = *v6;
    v3[1] = v6[1];
    v3 += 2;
    *(v4 - 1) = 0LL;
    *v4 = 7LL;
    v4 += 4;
    *(_WORD *)v6 = 0;
  }
  sub_18001FF34((__int64)v3, (__int64)v3);
  return v3;
}

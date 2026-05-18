/*
 * XREFs of sub_18006B90C @ 0x18006B90C
 * Callers:
 *     sub_18006C060 @ 0x18006C060 (sub_18006C060.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180079984 @ 0x180079984 (sub_180079984.c)
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 * Callees:
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 */

_QWORD *__fastcall sub_18006B90C(_QWORD *a1, _QWORD *a2, char *a3, __int64 a4)
{
  _QWORD *v4; // r11
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi

  v4 = a2;
  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *v4 = v6;
LABEL_3:
    v4[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( !sub_18001FE44(a3, v8 + 2) )
    {
      if ( v8 == v9 )
      {
        *v4 = v8;
        goto LABEL_3;
      }
      v8 = (_QWORD *)v8[1];
    }
    *v4 = *v8;
    v4[1] = v8;
  }
  return v4;
}

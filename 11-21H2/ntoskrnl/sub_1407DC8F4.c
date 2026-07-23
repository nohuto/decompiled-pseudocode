/*
 * XREFs of sub_1407DC8F4 @ 0x1407DC8F4
 * Callers:
 *     sub_1407DC794 @ 0x1407DC794 (sub_1407DC794.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1407DC8F4(unsigned __int16 *a1, unsigned __int16 *a2)
{
  _WORD *v2; // r8
  _WORD *v3; // r11
  unsigned __int64 v4; // r9
  _WORD *v5; // r10
  _WORD *v6; // rdx
  _WORD *v7; // rcx
  bool v8; // zf

  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = (_WORD *)*((_QWORD *)a2 + 1);
  v4 = (unsigned __int64)&v2[(unsigned __int64)*a1 >> 1];
  v5 = &v3[(unsigned __int64)*a2 >> 1];
  while ( 2 )
  {
    if ( (unsigned __int64)v2 >= v4 )
      return 0LL;
    v6 = v3;
    v7 = v2;
    while ( 1 )
    {
      v8 = v6 == v5;
      if ( v6 >= v5 )
        break;
      if ( *v7 != *v6 )
        goto LABEL_5;
      ++v6;
      if ( (unsigned __int64)++v7 >= v4 )
      {
        v8 = v6 == v5;
        break;
      }
    }
    if ( !v8 )
    {
LABEL_5:
      ++v2;
      continue;
    }
    return v2;
  }
}

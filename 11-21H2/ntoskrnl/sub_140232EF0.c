/*
 * XREFs of sub_140232EF0 @ 0x140232EF0
 * Callers:
 *     sub_140232EC0 @ 0x140232EC0 (sub_140232EC0.c)
 * Callees:
 *     sub_140232FC4 @ 0x140232FC4 (sub_140232FC4.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 *     sub_1407A09E4 @ 0x1407A09E4 (sub_1407A09E4.c)
 *     sub_1407A0EA0 @ 0x1407A0EA0 (sub_1407A0EA0.c)
 */

__int64 __fastcall sub_140232EF0(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD **i; // r15
  _QWORD *v7; // rsi
  _QWORD *j; // rbx
  _QWORD *v9; // r13
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  result = sub_1407A0EA0();
  if ( (_BYTE)result )
  {
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 32); v5 < *(_DWORD *)(a1 + 28); ++v5 )
    {
      v7 = *i++;
      while ( 1 )
      {
        v9 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        for ( j = (_QWORD *)v9[2]; j != v9 + 2; j = (_QWORD *)*j )
        {
          v10 = j;
          if ( *((_DWORD *)j + 4) == a2 )
          {
            v11 = (_QWORD *)*j;
            v12 = (_QWORD *)j[1];
            j = v12;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
              __fastfail(3u);
            *v12 = v11;
            v11[1] = v12;
            sub_1406AB544(v10);
            if ( (unsigned __int8)sub_140232FC4(v9, v9 + 2, a1) )
              break;
          }
        }
      }
    }
    return sub_1407A09E4(a1);
  }
  return result;
}

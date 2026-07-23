/*
 * XREFs of sub_1405DF018 @ 0x1405DF018
 * Callers:
 *     sub_1405DEF84 @ 0x1405DEF84 (sub_1405DEF84.c)
 *     sub_140649CA0 @ 0x140649CA0 (sub_140649CA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405DF018(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  __int64 result; // rax
  _WORD *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r9

  result = 0LL;
  v6 = a4;
  v7 = 0LL;
  if ( a2 )
  {
    v8 = a1 - (_QWORD)a4;
    v9 = a5;
    while ( v9 )
    {
      if ( *v6 )
      {
        *(_WORD *)((char *)v6 + v8) = *v6;
        --v9;
        ++v6;
        ++v7;
        if ( --a2 )
          continue;
      }
      if ( a2 )
        break;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = a5;
LABEL_9:
    if ( v9 && *v6 )
      result = 2147483653LL;
  }
  *a3 = v7;
  return result;
}

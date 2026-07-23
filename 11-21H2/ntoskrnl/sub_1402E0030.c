/*
 * XREFs of sub_1402E0030 @ 0x1402E0030
 * Callers:
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E0030(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r11
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 result; // rax

  v5 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    v8 = a4 - (_QWORD)a1;
    while ( a5 )
    {
      v9 = *(_WORD *)((char *)a1 + v8);
      if ( !v9 )
        break;
      *a1 = v9;
      --a5;
      ++a1;
      ++v6;
      if ( !--a2 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    --a1;
    v5 = -2147483643;
    --v6;
  }
  *a1 = 0;
  result = v5;
  if ( a3 )
    *a3 = v6;
  return result;
}

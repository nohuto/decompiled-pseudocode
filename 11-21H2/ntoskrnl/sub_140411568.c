/*
 * XREFs of sub_140411568 @ 0x140411568
 * Callers:
 *     sub_140405BF0 @ 0x140405BF0 (sub_140405BF0.c)
 * Callees:
 *     sub_140400B14 @ 0x140400B14 (sub_140400B14.c)
 *     sub_140400C00 @ 0x140400C00 (sub_140400C00.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400DA0 @ 0x140400DA0 (sub_140400DA0.c)
 */

__int64 __fastcall sub_140411568(char a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  __int64 result; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned int v12; // eax

  result = a5;
  v6 = a4;
  v7 = 1 << (a1 - 1);
  v9 = ~(-1 << a1);
  if ( a5 )
  {
    v10 = a3 - (_QWORD)a4;
    v11 = a5;
    do
    {
      v12 = v9 & sub_140400C78(a2);
      if ( (v12 & 1) != 0 )
      {
        if ( v12 <= v7 )
        {
          *v6 = 1;
          *(_DWORD *)((char *)v6 + v10) = v12;
          sub_140400DA0();
        }
        else
        {
          *v6 = -1;
          *(_DWORD *)((char *)v6 + v10) = v9 + 1 - v12;
          sub_140400B14();
        }
      }
      else
      {
        *(_DWORD *)((char *)v6 + v10) = 0;
        *v6 = 0;
      }
      result = sub_140400C00();
      ++v6;
      --v11;
    }
    while ( v11 );
  }
  return result;
}

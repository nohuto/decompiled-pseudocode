/*
 * XREFs of sub_1403BF834 @ 0x1403BF834
 * Callers:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     sub_140502744 @ 0x140502744 (sub_140502744.c)
 * Callees:
 *     _vsnprintf @ 0x1403E0560 (_vsnprintf.c)
 */

__int64 __fastcall sub_1403BF834(char *a1, __int64 a2, unsigned __int64 *a3, const char *a4, va_list Args)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnprintf(a1, a2 - 1, a4, Args);
  if ( v9 < 0 || v9 > v5 )
  {
    a1[v5] = 0;
    v8 = -2147483643;
  }
  else if ( v9 == v5 )
  {
    a1[v5] = 0;
  }
  else
  {
    v5 = v9;
  }
  if ( a3 )
    *a3 = v5;
  return v8;
}

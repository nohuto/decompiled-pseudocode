/*
 * XREFs of sub_1402DFCC8 @ 0x1402DFCC8
 * Callers:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

__int64 __fastcall sub_1402DFCC8(wchar_t *a1, __int64 a2, unsigned __int64 *a3, const wchar_t *a4, va_list Args)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v9 < 0 )
  {
LABEL_9:
    v8 = -2147483643;
    goto LABEL_8;
  }
  if ( v9 != v5 )
  {
    if ( v9 <= v5 )
    {
      v5 = v9;
      goto LABEL_5;
    }
    goto LABEL_9;
  }
LABEL_8:
  a1[v5] = 0;
LABEL_5:
  if ( a3 )
    *a3 = v5;
  return v8;
}

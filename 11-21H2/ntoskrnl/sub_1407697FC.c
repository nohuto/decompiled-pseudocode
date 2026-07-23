/*
 * XREFs of sub_1407697FC @ 0x1407697FC
 * Callers:
 *     sub_140769668 @ 0x140769668 (sub_140769668.c)
 * Callees:
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 */

__int64 __fastcall sub_1407697FC(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx

  v5 = a4;
  result = sub_14077F150(a1, a2);
  if ( (int)result >= 0 )
  {
    v9 = (const wchar_t *)(a2 + 8);
    v10 = wcschr(v9, 0x5Cu);
    if ( v10 )
    {
      v11 = v10 - v9;
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
    }
    if ( v11 <= 0x27 )
    {
      return 3221225523LL;
    }
    else
    {
      v12 = v11 + 1;
      if ( v11 + 1 > 0xFFFFFFFF )
      {
        return 3221225621LL;
      }
      else
      {
        if ( a5 )
          *a5 = v12;
        if ( v12 > (unsigned int)v5 )
          return 3221225507LL;
        else
          return sub_1402DFEFC(a3, v5, v9, v11, 0LL, 0LL, 2048);
      }
    }
  }
  return result;
}

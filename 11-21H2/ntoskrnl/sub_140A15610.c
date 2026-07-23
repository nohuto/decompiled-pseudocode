/*
 * XREFs of sub_140A15610 @ 0x140A15610
 * Callers:
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140A15610(const wchar_t *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // edi
  wchar_t *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx
  wchar_t v11; // ax
  wchar_t v12; // ax
  wchar_t v13; // r8
  wchar_t v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rax

  v3 = -1LL;
  v5 = 0;
  do
    ++v3;
  while ( Src[v3] );
  if ( a3 < v3 + 1 )
    return (unsigned int)-1073741789;
  v7 = wcschr(Src, 0x3Au);
  if ( v7 )
    goto LABEL_10;
  v8 = 4LL;
  if ( wcsncmp(Src, L"\\??\\", 4uLL) )
  {
    if ( !wcsncmp(Src, L"\\\\", 2uLL) )
    {
      v8 = 2LL;
      goto LABEL_12;
    }
    v7 = wcschr(Src, 0x5Cu);
    if ( !v7 )
    {
      v8 = 1LL;
      goto LABEL_12;
    }
LABEL_10:
    v8 = ((unsigned __int64)((char *)v7 - (char *)Src) >> 1) + 1;
  }
LABEL_12:
  memmove(a2, Src, 2 * v8);
  v9 = v8;
  for ( i = v8; i < v3; ++i )
  {
    v11 = Src[i];
    if ( v11 == 92 || v11 == 47 )
    {
      if ( !v9 || *((_WORD *)a2 + v9 - 1) != 92 )
        *((_WORD *)a2 + v9++) = 92;
    }
    else if ( v11 == 46 )
    {
      if ( i + 1 == v3 )
        break;
      v12 = Src[i + 1];
      if ( v12 == 92 || v12 == 47 )
      {
        ++i;
      }
      else if ( v12 == 46 )
      {
        if ( i + 2 == v3 || (v13 = Src[i + 2], v13 == 92) || v13 == 47 )
        {
          while ( v9 >= v8 )
          {
            v15 = *((_WORD *)a2 + v9);
            *((_WORD *)a2 + v9) = 0;
            if ( v15 == 92 )
            {
              do
              {
                v16 = *((_WORD *)a2 + v9);
                *((_WORD *)a2 + v9) = 0;
                if ( v16 == 92 )
                  break;
                --v9;
              }
              while ( v9 >= v8 );
              break;
            }
            --v9;
          }
          v17 = v9 + 1;
          ++i;
          if ( v9 >= v8 )
            v17 = v9;
          v9 = v17;
        }
      }
    }
    else
    {
      while ( i < v3 )
      {
        v14 = Src[i];
        if ( v14 == 92 || v14 == 47 )
        {
          if ( v9 >= 2 && *((_WORD *)a2 + v9 - 1) == 46 && *((_WORD *)a2 + v9 - 2) != 46 )
            --v9;
          break;
        }
        *((_WORD *)a2 + v9++) = v14;
        ++i;
      }
      --i;
    }
  }
  *((_WORD *)a2 + v9) = 0;
  return v5;
}

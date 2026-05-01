/*
 * XREFs of AslPathClean @ 0x1800A3B30
 * Callers:
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 * Callees:
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 */

__int64 __fastcall AslPathClean(const wchar_t *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // edi
  wchar_t *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx
  wchar_t v11; // ax
  unsigned __int64 v12; // rax
  wchar_t v13; // ax
  __int16 v14; // ax
  __int16 v15; // ax
  unsigned __int64 v16; // rax

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
  memmove_0(a2, Src, 2 * v8);
  v9 = v8;
  for ( i = v8; i < v3; ++i )
  {
    if ( Src[i] == 92 || Src[i] == 47 )
    {
      if ( !v9 || *((_WORD *)a2 + v9 - 1) != 92 )
        *((_WORD *)a2 + v9++) = 92;
    }
    else if ( Src[i] == 46 )
    {
      if ( i + 1 == v3 )
        break;
      v11 = Src[i + 1];
      if ( v11 == 92 || v11 == 47 )
      {
        ++i;
      }
      else if ( v11 == 46 )
      {
        v12 = i + 2;
        if ( i + 2 == v3 || Src[v12] == 92 || Src[v12] == 47 )
        {
          while ( v9 >= v8 )
          {
            v14 = *((_WORD *)a2 + v9);
            *((_WORD *)a2 + v9) = 0;
            if ( v14 == 92 )
            {
              do
              {
                v15 = *((_WORD *)a2 + v9);
                *((_WORD *)a2 + v9) = 0;
                if ( v15 == 92 )
                  break;
                --v9;
              }
              while ( v9 >= v8 );
              break;
            }
            --v9;
          }
          v16 = v9 + 1;
          ++i;
          if ( v9 >= v8 )
            v16 = v9;
          v9 = v16;
        }
      }
    }
    else
    {
      while ( i < v3 )
      {
        v13 = Src[i];
        if ( v13 == 92 || v13 == 47 )
        {
          if ( v9 >= 2 && *((_WORD *)a2 + v9 - 1) == 46 && *((_WORD *)a2 + v9 - 2) != 46 )
            --v9;
          break;
        }
        *((_WORD *)a2 + v9++) = v13;
        ++i;
      }
      --i;
    }
  }
  *((_WORD *)a2 + v9) = 0;
  return v5;
}

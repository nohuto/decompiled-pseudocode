/*
 * XREFs of AslPathClean @ 0x180738B7C
 * Callers:
 *     ?PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284D78 (-PiiFilterExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 *     PiiFilterExecute @ 0x1807384B4 (PiiFilterExecute.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 __fastcall AslPathClean(const wchar_t *Src, void *a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebp
  wchar_t *v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  wchar_t v10; // ax
  wchar_t v11; // ax
  bool v12; // zf
  unsigned __int64 v13; // rax
  wchar_t v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rax

  v2 = -1LL;
  v4 = 0;
  do
    ++v2;
  while ( Src[v2] );
  if ( v2 + 1 <= 0x104 )
  {
    v6 = wcschr(Src, 0x3Au);
    if ( v6 )
      goto LABEL_10;
    v7 = 4LL;
    if ( !wcsncmp(Src, L"\\??\\", 4uLL) )
      goto LABEL_12;
    if ( !wcsncmp(Src, L"\\\\", 2uLL) )
    {
      v7 = 2LL;
      goto LABEL_12;
    }
    v6 = wcschr(Src, 0x5Cu);
    if ( v6 )
LABEL_10:
      v7 = ((unsigned __int64)((char *)v6 - (char *)Src) >> 1) + 1;
    else
      v7 = 1LL;
LABEL_12:
    memmove_0(a2, Src, 2 * v7);
    v8 = v7;
    v9 = v7;
    if ( v7 >= v2 )
    {
LABEL_54:
      *((_WORD *)a2 + v8) = 0;
      return v4;
    }
    while ( 1 )
    {
      if ( Src[v9] == 92 || Src[v9] == 47 )
      {
        if ( !v8 || *((_WORD *)a2 + v8 - 1) != 92 )
          *((_WORD *)a2 + v8++) = 92;
        goto LABEL_53;
      }
      if ( Src[v9] != 46 )
        break;
      if ( v9 + 1 == v2 )
        goto LABEL_54;
      v11 = Src[v9 + 1];
      if ( v11 == 92 || v11 == 47 )
      {
        ++v9;
        goto LABEL_53;
      }
      v12 = v11 == 46;
      v13 = v9 + 2;
      if ( v12 && (v13 == v2 || Src[v13] == 92 || Src[v13] == 47) )
      {
        while ( v8 >= v7 )
        {
          v15 = *((_WORD *)a2 + v8);
          *((_WORD *)a2 + v8) = 0;
          if ( v15 == 92 )
          {
            do
            {
              v16 = *((_WORD *)a2 + v8);
              *((_WORD *)a2 + v8) = 0;
              if ( v16 == 92 )
                break;
              --v8;
            }
            while ( v8 >= v7 );
            break;
          }
          --v8;
        }
        v17 = v8 + 1;
        ++v9;
        if ( v8 >= v7 )
          v17 = v8;
        v8 = v17;
        goto LABEL_53;
      }
      if ( Src[v13] != 92 && Src[v13] != 47 )
      {
        if ( v9 < v2 )
        {
          while ( 1 )
          {
            v14 = Src[v9];
            if ( v14 == 92 )
              break;
            if ( v14 != 47 )
            {
              *((_WORD *)a2 + v8) = v14;
              ++v9;
              ++v8;
              if ( v9 < v2 )
                continue;
            }
LABEL_20:
            if ( v9 >= v2 )
              goto LABEL_25;
            break;
          }
LABEL_21:
          if ( v8 >= 2 && *((_WORD *)a2 + v8 - 1) == 46 && *((_WORD *)a2 + v8 - 2) != 46 )
            --v8;
        }
LABEL_25:
        --v9;
      }
LABEL_53:
      if ( ++v9 >= v2 )
        goto LABEL_54;
    }
    if ( v9 < v2 )
    {
      while ( 1 )
      {
        v10 = Src[v9];
        if ( v10 == 92 )
          goto LABEL_21;
        if ( v10 != 47 )
        {
          *((_WORD *)a2 + v8) = v10;
          ++v9;
          ++v8;
          if ( v9 < v2 )
            continue;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_25;
  }
  return (unsigned int)-1073741789;
}

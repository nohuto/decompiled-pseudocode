/*
 * XREFs of sub_140A1582C @ 0x140A1582C
 * Callers:
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A1582C(unsigned __int16 *a1)
{
  unsigned __int16 v2; // bp
  const wchar_t *v3; // rcx
  unsigned int v4; // edi
  int v5; // ebx
  unsigned __int16 v6; // r10
  unsigned __int64 v7; // rcx
  __int16 v8; // dx
  unsigned __int16 v9; // r8
  unsigned __int16 i; // r9
  __int64 v11; // rdx
  __int16 v12; // cx
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // rdx
  __int16 v16; // cx
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int16 v20; // ax

  v2 = *a1 >> 1;
  if ( *a1 < 2u || (v3 = (const wchar_t *)*((_QWORD *)a1 + 1), v4 = 0, !*v3) )
  {
    v4 = -1073741582;
    sub_1406E0C3C(1LL, (__int64)"AslPathCleanUstr");
    return v4;
  }
  v5 = 4;
  if ( v2 < 8u )
  {
    if ( v2 < 4u )
    {
      if ( v2 <= 2u )
        goto LABEL_14;
      goto LABEL_13;
    }
LABEL_7:
    if ( !wcsncmp(*((const wchar_t **)a1 + 1), L"\\??\\", 4uLL) )
    {
      v5 = 3;
      goto LABEL_15;
    }
    if ( !wcsncmp(*((const wchar_t **)a1 + 1), L"\\\\?\\", 4uLL)
      || !wcsncmp(*((const wchar_t **)a1 + 1), L"\\\\.\\", 4uLL) )
    {
      goto LABEL_15;
    }
LABEL_13:
    if ( !wcsncmp(*((const wchar_t **)a1 + 1), L"\\\\", 2uLL) )
      goto LABEL_15;
LABEL_14:
    v5 = 1;
    goto LABEL_15;
  }
  if ( wcsnicmp(v3, L"\\??\\UNC\\", 8uLL) )
    goto LABEL_7;
  v5 = 5;
LABEL_15:
  v6 = 0;
  do
  {
    v7 = 2LL * v6;
    if ( v7 >= *a1 )
      break;
    v8 = *(_WORD *)(v7 + *((_QWORD *)a1 + 1));
    if ( v8 == 92 || v8 == 47 )
      --v5;
    ++v6;
  }
  while ( v5 > 0 );
  v9 = v6;
  if ( v6 < v2 )
  {
    for ( i = v6; i < v2; ++i )
    {
      if ( i < v9 )
      {
        sub_1406E0C3C(1LL, (__int64)"AslPathCleanUstr");
        return (unsigned int)-1073741595;
      }
      v11 = *((_QWORD *)a1 + 1);
      v12 = *(_WORD *)(v11 + 2LL * i);
      if ( v12 == 92 || v12 == 47 )
      {
        if ( !v9 || *(_WORD *)(v11 + 2LL * v9 - 2) != 92 )
          *(_WORD *)(v11 + 2LL * v9++) = 92;
        continue;
      }
      if ( v12 != 46 )
      {
        while ( i < v2 )
        {
          v15 = *((_QWORD *)a1 + 1);
          v16 = *(_WORD *)(v15 + 2LL * i);
          if ( v16 == 92 || v16 == 47 )
            break;
          if ( i != v9 )
            *(_WORD *)(v15 + 2LL * v9) = v16;
          ++v9;
          ++i;
        }
        --i;
        continue;
      }
      if ( i + 1 == v2 )
        break;
      v13 = *(_WORD *)(v11 + 2LL * i + 2);
      if ( v13 != 92 && v13 != 47 )
      {
        if ( v13 != 46 )
          continue;
        if ( i + 2 != v2 )
        {
          v14 = *(_WORD *)(v11 + 2LL * i + 4);
          if ( v14 != 92 && v14 != 47 )
            continue;
        }
        while ( 1 )
        {
          if ( v9 < v6 )
          {
LABEL_48:
            ++v9;
            goto LABEL_49;
          }
          v17 = *((_QWORD *)a1 + 1);
          v18 = *(_WORD *)(v17 + 2LL * v9);
          *(_WORD *)(v17 + 2LL * v9) = 0;
          if ( v18 == 92 )
            break;
          --v9;
        }
        while ( 1 )
        {
          v19 = *((_QWORD *)a1 + 1);
          v20 = *(_WORD *)(v19 + 2LL * v9);
          *(_WORD *)(v19 + 2LL * v9) = 0;
          if ( v20 == 92 )
            break;
          if ( --v9 < v6 )
            goto LABEL_48;
        }
      }
LABEL_49:
      ++i;
    }
  }
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v9) = 0;
  *a1 = 2 * v9;
  return v4;
}

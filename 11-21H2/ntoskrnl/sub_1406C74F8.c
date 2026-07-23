/*
 * XREFs of sub_1406C74F8 @ 0x1406C74F8
 * Callers:
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 */

__int64 __fastcall sub_1406C74F8(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        char a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  _WORD v23[48]; // [rsp+60h] [rbp-98h] BYREF

  if ( !*(_BYTE *)(a1 + 4) )
  {
    result = sub_1406C7604(a1, a2, v23, a2, a5);
    if ( (int)result < 0 )
      return result;
    if ( (a3 & 0x200) == 0 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v23[v11] );
      v12 = v11 + 40;
      if ( v12 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v12;
        if ( (unsigned int)v12 <= a7 )
          return sub_1402DFBC4(a6, a7, 0LL, 0LL, 0x800u, L"%s\\%s", L"System\\CurrentControlSet\\Control\\Class", v23);
        return 3221225507LL;
      }
      return 3221225621LL;
    }
    if ( !a4 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v23[v19] );
      v20 = v19 + 91;
      if ( v20 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v20;
        if ( (unsigned int)v20 <= a7 )
          return sub_1402DFBC4(
                   a6,
                   a7,
                   0LL,
                   0LL,
                   0x800u,
                   L"%s\\%s\\%s",
                   L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                   L"System\\CurrentControlSet\\Control\\Class",
                   v23);
        return 3221225507LL;
      }
      return 3221225621LL;
    }
    if ( a4 != -1 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v23[v21] );
      v22 = v21 + 88;
      if ( v22 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v22;
        if ( (unsigned int)v22 <= a7 )
          return sub_1402DFBC4(
                   a6,
                   a7,
                   0LL,
                   0LL,
                   0x800u,
                   L"%s\\%04u\\%s\\%s",
                   L"System\\CurrentControlSet\\Hardware Profiles",
                   a4,
                   L"System\\CurrentControlSet\\Control\\Class",
                   v23);
        return 3221225507LL;
      }
      return 3221225621LL;
    }
    return 3221225485LL;
  }
  if ( (a3 & 0x200) != 0 )
  {
    if ( a4 )
    {
      if ( a4 != -1 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( *(_WORD *)(a2 + 2 * v15) );
        v16 = v15 + 97;
        if ( v16 <= 0xFFFFFFFF )
        {
          if ( a8 )
            *a8 = v16;
          if ( (unsigned int)v16 <= a7 )
            return sub_1402DFBC4(
                     a6,
                     a7,
                     0LL,
                     0LL,
                     0x800u,
                     L"%s\\%04u\\%s\\%s\\%s",
                     L"System\\CurrentControlSet\\Hardware Profiles",
                     a4,
                     L"System\\CurrentControlSet\\Enum",
                     a2,
                     L"Driver Parameters");
          return 3221225507LL;
        }
        return 3221225621LL;
      }
      return 3221225485LL;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a2 + 2 * v13) );
    v14 = v13 + 100;
    if ( v14 > 0xFFFFFFFF )
      return 3221225621LL;
    if ( a8 )
      *a8 = v14;
    if ( (unsigned int)v14 > a7 )
      return 3221225507LL;
    return sub_1402DFBC4(
             a6,
             a7,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s\\%s\\%s",
             L"System\\CurrentControlSet\\Hardware Profiles\\Current",
             L"System\\CurrentControlSet\\Enum",
             a2,
             L"Driver Parameters");
  }
  else
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(a2 + 2 * v17) );
    v18 = v17 + 49;
    if ( v18 > 0xFFFFFFFF )
      return 3221225621LL;
    if ( a8 )
      *a8 = v18;
    if ( (unsigned int)v18 > a7 )
      return 3221225507LL;
    return sub_1402DFBC4(
             a6,
             a7,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s\\%s",
             L"System\\CurrentControlSet\\Enum",
             a2,
             L"Driver Parameters");
  }
}

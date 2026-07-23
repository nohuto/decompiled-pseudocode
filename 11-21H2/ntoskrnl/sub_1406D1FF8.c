/*
 * XREFs of sub_1406D1FF8 @ 0x1406D1FF8
 * Callers:
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 */

__int64 __fastcall sub_1406D1FF8(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        int a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax

  if ( (a3 & 0x200) != 0 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        return 3221225485LL;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a2 + 2 * v13) );
      v14 = v13 + 79;
      if ( v14 > 0xFFFFFFFF )
        return 3221225621LL;
      if ( a8 )
        *a8 = v14;
      if ( (unsigned int)v14 <= a7 )
        return sub_1402DFBC4(
                 a6,
                 a7,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 L"System\\CurrentControlSet\\Enum",
                 a2);
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a2 + 2 * v11) );
      v12 = v11 + 82;
      if ( v12 > 0xFFFFFFFF )
        return 3221225621LL;
      if ( a8 )
        *a8 = v12;
      if ( (unsigned int)v12 <= a7 )
        return sub_1402DFBC4(
                 a6,
                 a7,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                 L"System\\CurrentControlSet\\Enum",
                 a2);
    }
    return 3221225507LL;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a2 + 2 * v8) );
  if ( (a3 & 0x100) != 0 )
  {
    v15 = v8 + 31;
    if ( v15 > 0xFFFFFFFF )
      return 3221225621LL;
    if ( a8 )
      *a8 = v15;
    if ( (unsigned int)v15 <= a7 )
      return sub_1402DFBC4(a6, a7, 0LL, 0LL, 0x800u, L"%s\\%s", L"System\\CurrentControlSet\\Enum", a2);
    return 3221225507LL;
  }
  v9 = v8 + 49;
  if ( v9 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( a8 )
    *a8 = v9;
  if ( (unsigned int)v9 > a7 )
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
           L"Device Parameters");
}

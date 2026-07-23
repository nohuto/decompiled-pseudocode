/*
 * XREFs of sub_1407871C4 @ 0x1407871C4
 * Callers:
 *     sub_140699B5C @ 0x140699B5C (sub_140699B5C.c)
 *     sub_140781268 @ 0x140781268 (sub_140781268.c)
 *     sub_140A23328 @ 0x140A23328 (sub_140A23328.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1407871A0 @ 0x1407871A0 (sub_1407871A0.c)
 */

__int64 __fastcall sub_1407871C4(
        __int64 a1,
        const WCHAR *a2,
        __int16 a3,
        int a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  int v11; // esi
  __int64 result; // rax
  const wchar_t *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx

  if ( (a3 & 0x60) == 0x60 )
    return 3221225485LL;
  if ( (unsigned __int8)a3 == 32 )
  {
    v11 = 2;
    result = sub_1407871A0(a1, a2);
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return 3221225485LL;
    v11 = 4;
    result = sub_1407871A0(a1, a2);
  }
  if ( (int)result < 0 )
    return result;
  v13 = L"System\\CurrentControlSet\\Control\\Class";
  if ( v11 != 2 )
    v13 = L"System\\CurrentControlSet\\Control\\DeviceClasses";
  if ( (a3 & 0x200) == 0 )
  {
    v14 = -1LL;
    v15 = -1LL;
    do
      ++v15;
    while ( v13[v15] );
    v16 = v15 + 1;
    if ( a2 )
    {
      do
        ++v14;
      while ( a2[v14] );
      v16 += v14 + 1;
    }
    if ( v16 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v16;
      if ( (unsigned int)v16 <= a7 )
      {
        if ( a2 )
          return sub_1402DFBC4(a6, a7, 0LL, 0LL, 0x800u, L"%s\\%s", v13, a2);
        else
          return sub_1402DFBC4(a6, a7, 0LL, 0LL, 0x800u, L"%s", v13);
      }
      return 3221225507LL;
    }
    return 3221225621LL;
  }
  if ( a4 )
  {
    if ( a4 != -1 )
    {
      v20 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( v13[v21] );
      v22 = v21 + 49;
      if ( a2 )
      {
        do
          ++v20;
        while ( a2[v20] );
        v22 += v20 + 1;
      }
      if ( v22 > 0xFFFFFFFF )
        return 3221225621LL;
      if ( a8 )
        *a8 = v22;
      if ( (unsigned int)v22 > a7 )
        return 3221225507LL;
      if ( a2 )
        return sub_1402DFBC4(
                 a6,
                 a7,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 v13,
                 a2);
      else
        return sub_1402DFBC4(
                 a6,
                 a7,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 v13);
    }
    return 3221225485LL;
  }
  v17 = -1LL;
  v18 = -1LL;
  do
    ++v18;
  while ( v13[v18] );
  v19 = v18 + 52;
  if ( a2 )
  {
    do
      ++v17;
    while ( a2[v17] );
    v19 += v17 + 1;
  }
  if ( v19 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( a8 )
    *a8 = v19;
  if ( (unsigned int)v19 > a7 )
    return 3221225507LL;
  if ( a2 )
    return sub_1402DFBC4(
             a6,
             a7,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s\\%s",
             L"System\\CurrentControlSet\\Hardware Profiles\\Current",
             v13,
             a2);
  else
    return sub_1402DFBC4(
             a6,
             a7,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s",
             L"System\\CurrentControlSet\\Hardware Profiles\\Current",
             v13);
}

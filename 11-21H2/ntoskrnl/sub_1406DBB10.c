/*
 * XREFs of sub_1406DBB10 @ 0x1406DBB10
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_1407872FC @ 0x1407872FC (sub_1407872FC.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 */

__int64 __fastcall sub_1406DBB10(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  wchar_t *v9; // rax
  const WCHAR *v10; // r8
  wchar_t v11; // ax
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = a4;
  result = sub_14077F150(a1, a2);
  if ( (int)result >= 0 )
  {
    v9 = wcschr((const wchar_t *)(a2 + 8), 0x5Cu);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = v9[1];
      v12 = v10;
      while ( v11 )
      {
        if ( v11 == 92 || v11 == 47 )
          return 3221225529LL;
        v11 = *++v12;
      }
      v13 = -1LL;
      do
        ++v13;
      while ( v10[v13] );
      v14 = v13 + 1;
      if ( v14 > 0xFFFFFFFF )
      {
        return 3221225621LL;
      }
      else
      {
        if ( a5 )
          *a5 = v14;
        if ( (unsigned int)v14 > (unsigned int)v5 )
          return 3221225507LL;
        else
          return sub_1402E0340(a3, v5, v10, 0LL, 0LL, 2304);
      }
    }
    else
    {
      return 3221225524LL;
    }
  }
  return result;
}

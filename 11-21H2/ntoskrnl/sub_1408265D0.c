/*
 * XREFs of sub_1408265D0 @ 0x1408265D0
 * Callers:
 *     sub_140826570 @ 0x140826570 (sub_140826570.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 */

__int64 __fastcall sub_1408265D0(__int64 a1, const WCHAR *a2, char a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 *i; // rax
  const UNICODE_STRING *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = qword_140D00AC8;
  v4 = 0;
  v9 = 0LL;
  if ( a2 && wcsicmp(a2, asc_140868930) )
  {
    v4 = sub_1406C2248(v3, a2, &v9);
    if ( v4 >= 0 )
    {
      if ( a3 )
        *(_DWORD *)&v9[4].Length |= 4u;
      else
        *(_DWORD *)&v9[4].Length &= ~4u;
    }
  }
  else
  {
    for ( i = *(__int64 **)(v3 + 16); i != (__int64 *)(v3 + 16); i = (__int64 *)*i )
    {
      if ( a3 )
        *((_DWORD *)i + 16) |= 4u;
      else
        *((_DWORD *)i + 16) &= ~4u;
    }
  }
  return (unsigned int)v4;
}

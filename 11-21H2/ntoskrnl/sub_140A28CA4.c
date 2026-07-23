/*
 * XREFs of sub_140A28CA4 @ 0x140A28CA4
 * Callers:
 *     sub_140699B5C @ 0x140699B5C (sub_140699B5C.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 *     sub_140A28FC4 @ 0x140A28FC4 (sub_140A28FC4.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_140A29BBC @ 0x140A29BBC (sub_140A29BBC.c)
 */

__int64 __fastcall sub_140A28CA4(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    return 3221225485LL;
  result = sub_140A29BBC(a1, a2);
  if ( (int)result >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a2 + 2 * v10) );
    v11 = v10 + 47;
    if ( v11 > 0xFFFFFFFF )
    {
      return 3221225621LL;
    }
    else
    {
      if ( a8 )
        *a8 = v11;
      if ( (unsigned int)v11 <= a7 )
        return sub_1402DFBC4(a6, a7, 0LL, 0LL, 0x800u, L"System\\CurrentControlSet\\Control\\DevicePanels\\%s", a2);
      else
        return 3221225507LL;
    }
  }
  return result;
}

/*
 * XREFs of sub_140982AF8 @ 0x140982AF8
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_14096EAB0 @ 0x14096EAB0 (sub_14096EAB0.c)
 */

__int64 __fastcall sub_140982AF8(__int64 *a1, __int64 *a2, char a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *a2;
  if ( *a2 )
  {
    if ( (result & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
    {
      v5 = *a1;
      if ( (result & 4) != 0 )
      {
        if ( (result & 0xFFFFFFFFFFFFFFFBuLL) == 0 && (*(_DWORD *)(v5 + 4) & 0x100) != 0 )
          return sub_14096EAB0(v5, a4);
        return 3221225485LL;
      }
      if ( (*(_DWORD *)(v5 + 4) & 0x100) != 0 || !a4 )
        return 3221225659LL;
      if ( (ULONG_PTR *)v5 != &StartContext )
      {
        if ( a3 )
          return 3221225569LL;
        return 3221225659LL;
      }
    }
    return 3221225485LL;
  }
  return result;
}

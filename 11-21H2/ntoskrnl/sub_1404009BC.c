/*
 * XREFs of sub_1404009BC @ 0x1404009BC
 * Callers:
 *     sub_140401C90 @ 0x140401C90 (sub_140401C90.c)
 * Callees:
 *     sub_140400914 @ 0x140400914 (sub_140400914.c)
 */

__int64 __fastcall sub_1404009BC(
        const void *a1,
        size_t a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        _WORD *a8)
{
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx

  result = 0LL;
  if ( (a7 & 0xFFFFFFFD) != 0 )
    return 209715726LL;
  if ( !a3 )
    return sub_140400914(a1, a2, 0LL, 0LL, a5, 1, a8, a6);
  v13 = 0;
  if ( a4 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      result = sub_140400914(
                 a1,
                 a2,
                 *(const void **)(a3 + 16 * v14 + 8),
                 *(unsigned int *)(a3 + 16 * v14),
                 a5,
                 0,
                 a8,
                 a6);
      if ( !(_DWORD)result )
        break;
      v14 = ++v13;
      if ( v13 >= a4 )
      {
        if ( (a7 & 2) == 0 )
          return result;
        return sub_140400914(a1, a2, 0LL, 0LL, a5, 1, a8, a6);
      }
    }
  }
  return result;
}

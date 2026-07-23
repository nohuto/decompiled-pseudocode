/*
 * XREFs of sub_1402270B8 @ 0x1402270B8
 * Callers:
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_14036C624 @ 0x14036C624 (sub_14036C624.c)
 *     sub_14036C9FC @ 0x14036C9FC (sub_14036C9FC.c)
 *     sub_1403C92F4 @ 0x1403C92F4 (sub_1403C92F4.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_140598DA4 @ 0x140598DA4 (sub_140598DA4.c)
 *     sub_14082B1B4 @ 0x14082B1B4 (sub_14082B1B4.c)
 * Callees:
 *     sub_140227254 @ 0x140227254 (sub_140227254.c)
 *     sub_1405AE144 @ 0x1405AE144 (sub_1405AE144.c)
 */

signed __int64 __fastcall sub_1402270B8(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        signed __int64 a3,
        unsigned int a4)
{
  int v4; // r15d
  signed __int64 result; // rax
  int v10; // ebp
  unsigned __int64 v11; // rbx
  signed __int64 v12; // rtt
  signed __int64 v13; // rtt

  v4 = dword_140D06880;
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  result = *a1;
  if ( *a1 != a3 )
  {
    while ( 1 )
    {
      v10 = 0;
      if ( (v4 & 0x18000000u) <= 0x8000000
        && ((v4 & 0x18000000) == 0
         || a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (result & 0x80u) == 0LL) )
      {
        v10 = 1;
        if ( *((_DWORD *)KeGetCurrentPrcb() + 9) < (unsigned int)dword_140D06884 )
          return sub_1405AE144(a1, a2, a3, 1LL);
      }
      while ( (result & 0x20) != 0 && !v10 )
      {
        v11 = result & 0xFFFFFFFFFFFFFFDFuLL;
        if ( (dword_140D06880 & 0x4000000) != 0 )
          _mm_lfence();
        v12 = result;
        result = _InterlockedCompareExchange64(a1, v11, result);
        if ( v12 == result )
        {
          sub_140227254(a2, result, a4, 1LL);
          result = v11;
          break;
        }
        if ( (v4 & 0x18000000) == 0x8000000
          && a2 >= 0xFFFFF6FB40000000uLL
          && a2 <= 0xFFFFF6FB7FFFFFFFuLL
          && (result & 0x80u) == 0LL )
        {
          v10 = 1;
        }
      }
      if ( (dword_140D06880 & 0x4000000) != 0 )
        _mm_lfence();
      v13 = result;
      result = _InterlockedCompareExchange64(a1, a3, result);
      if ( v13 == result )
        break;
      if ( result == a3 )
        return result;
    }
    if ( v10 )
      result |= 0x20uLL;
    if ( (result & 0x20) != 0 )
      return sub_140227254(a2, result, a4, 1LL);
  }
  return result;
}

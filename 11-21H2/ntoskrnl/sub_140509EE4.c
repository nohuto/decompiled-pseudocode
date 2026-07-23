/*
 * XREFs of sub_140509EE4 @ 0x140509EE4
 * Callers:
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 * Callees:
 *     sub_1403AAD84 @ 0x1403AAD84 (sub_1403AAD84.c)
 */

__int64 __fastcall sub_140509EE4(__int64 *a1, _BYTE *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  result = *a1 & 0x2000100000000000LL;
  if ( result == 0x2000000000000000LL )
  {
    if ( (v2 & 0x1000000000000000LL) != 0 )
    {
      *a2 = 1;
      if ( (v2 & 0x200000000000000LL) == 0 )
      {
        if ( *((_BYTE *)a1 + 8) )
          a2[1] = 1;
      }
    }
    else
    {
      return sub_1403AAD84(a1[2], *((_DWORD *)a1 + 3));
    }
  }
  return result;
}

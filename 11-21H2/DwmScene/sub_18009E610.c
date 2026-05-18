/*
 * XREFs of sub_18009E610 @ 0x18009E610
 * Callers:
 *     sub_180078514 @ 0x180078514 (sub_180078514.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009E610(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 < 0x801 )
  {
    result = 16LL;
    if ( a2 >= 0x10 )
      result = a2;
  }
  else
  {
    result = 2048LL;
  }
  *(_DWORD *)(a1 + 1940) = result;
  return result;
}

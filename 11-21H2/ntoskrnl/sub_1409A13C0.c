/*
 * XREFs of sub_1409A13C0 @ 0x1409A13C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409A13C0(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    return 0LL;
  }
  return result;
}

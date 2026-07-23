/*
 * XREFs of sub_1409BD350 @ 0x1409BD350
 * Callers:
 *     sub_1409BDA38 @ 0x1409BDA38 (sub_1409BDA38.c)
 *     sub_1409BE594 @ 0x1409BE594 (sub_1409BE594.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409BD350(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + (a2 >> 3));
  if ( (int)result < 64 )
  {
    result = (unsigned int)(a2 * *(_DWORD *)(a1 + 24));
    if ( (int)result > 64 )
      return 64LL;
  }
  return result;
}

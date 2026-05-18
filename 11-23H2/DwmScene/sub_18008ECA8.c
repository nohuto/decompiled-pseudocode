/*
 * XREFs of sub_18008ECA8 @ 0x18008ECA8
 * Callers:
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008ECA8(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 16LL;
  if ( a2 < 0x10 || (v4 = 2048, result = a2, a2 <= 0x800) )
    v4 = result;
  *(_DWORD *)(a1 + 1940) = v4;
  return result;
}

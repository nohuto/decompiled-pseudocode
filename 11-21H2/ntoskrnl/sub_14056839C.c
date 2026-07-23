/*
 * XREFs of sub_14056839C @ 0x14056839C
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1405C7284 @ 0x1405C7284 (sub_1405C7284.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056839C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 11684);
  result = 0LL;
  while ( v2 > a2 )
  {
    v2 >>= 4;
    result = DesiredTime + (unsigned int)result;
  }
  return result;
}

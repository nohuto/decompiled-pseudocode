/*
 * XREFs of sub_14068CF68 @ 0x14068CF68
 * Callers:
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     sub_14068CFE4 @ 0x14068CFE4 (sub_14068CFE4.c)
 */

__int64 __fastcall sub_14068CF68(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = sub_14068CFE4(a1, a2, a1 + v6 + 24 * (v5 + 13LL));
    if ( (int)result < 0 )
      break;
    if ( ++v5 >= 0x18 )
      return 0LL;
  }
  return result;
}

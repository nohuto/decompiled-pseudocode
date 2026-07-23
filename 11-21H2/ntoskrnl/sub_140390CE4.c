/*
 * XREFs of sub_140390CE4 @ 0x140390CE4
 * Callers:
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 *     sub_1402E9070 @ 0x1402E9070 (sub_1402E9070.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 */

__int64 __fastcall sub_140390CE4(ULONG_PTR a1)
{
  __int64 v1; // rcx

  if ( sub_1402C1520(a1) )
    return 1LL;
  else
    return (*(unsigned __int8 *)(48 * v1 - 0x21FFFFFFFFDDLL) >> 2) & 2;
}

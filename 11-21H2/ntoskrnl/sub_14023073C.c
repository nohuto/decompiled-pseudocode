/*
 * XREFs of sub_14023073C @ 0x14023073C
 * Callers:
 *     sub_140230700 @ 0x140230700 (sub_140230700.c)
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_1403B78C4 @ 0x1403B78C4 (sub_1403B78C4.c)
 *     sub_1403C4E98 @ 0x1403C4E98 (sub_1403C4E98.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023073C(unsigned int a1)
{
  __int64 result; // rax

  if ( (dword_140D0689C & 0x8400000) == 0 )
    return 0LL;
  result = 1LL;
  if ( a1 > 1 && (dword_140D0689C & 0x8000000) != 0 )
    return 0LL;
  return result;
}

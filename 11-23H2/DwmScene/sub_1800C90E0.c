/*
 * XREFs of sub_1800C90E0 @ 0x1800C90E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800C9020 @ 0x1800C9020 (sub_1800C9020.c)
 */

LPVOID __fastcall sub_1800C90E0(LPVOID lpMem, char a2)
{
  sub_1800C9020((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}

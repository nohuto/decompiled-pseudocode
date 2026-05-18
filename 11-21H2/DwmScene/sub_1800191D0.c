/*
 * XREFs of sub_1800191D0 @ 0x1800191D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18005BD5C @ 0x18005BD5C (sub_18005BD5C.c)
 */

LPVOID __fastcall sub_1800191D0(LPVOID lpMem, char a2)
{
  sub_18005BD5C();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}

/*
 * XREFs of sub_180086A50 @ 0x180086A50
 * Callers:
 *     sub_180087F50 @ 0x180087F50 (sub_180087F50.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008BE3C @ 0x18008BE3C (sub_18008BE3C.c)
 */

LPVOID __fastcall sub_180086A50(LPVOID lpMem, char a2)
{
  sub_18008BE3C();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}

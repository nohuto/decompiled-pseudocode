/*
 * XREFs of sub_180025F30 @ 0x180025F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

void *__fastcall sub_180025F30(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}

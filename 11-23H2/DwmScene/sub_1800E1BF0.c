/*
 * XREFs of sub_1800E1BF0 @ 0x1800E1BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

void *__fastcall sub_1800E1BF0(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}

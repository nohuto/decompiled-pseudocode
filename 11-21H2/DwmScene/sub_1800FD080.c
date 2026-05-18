/*
 * XREFs of sub_1800FD080 @ 0x1800FD080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

void *__fastcall sub_1800FD080(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}

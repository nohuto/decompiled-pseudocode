/*
 * XREFs of sub_1800345A0 @ 0x1800345A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

void *__fastcall sub_1800345A0(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}

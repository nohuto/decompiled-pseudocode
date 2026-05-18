/*
 * XREFs of sub_180019020 @ 0x180019020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

void *__fastcall sub_180019020(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}

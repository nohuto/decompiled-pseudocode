/*
 * XREFs of sub_1800B0850 @ 0x1800B0850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800B0810 @ 0x1800B0810 (sub_1800B0810.c)
 */

_QWORD *__fastcall sub_1800B0850(_QWORD *lpMem, char a2)
{
  sub_1800B0810(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}

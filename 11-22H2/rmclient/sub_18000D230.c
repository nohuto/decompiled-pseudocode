/*
 * XREFs of sub_18000D230 @ 0x18000D230
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

_QWORD *__fastcall sub_18000D230(_QWORD *a1, char a2)
{
  *a1 = off_180020DA8;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}

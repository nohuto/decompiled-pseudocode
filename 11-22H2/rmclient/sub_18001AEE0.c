/*
 * XREFs of sub_18001AEE0 @ 0x18001AEE0
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

_DWORD *__fastcall sub_18001AEE0(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}

/*
 * XREFs of sub_18001AFD0 @ 0x18001AFD0
 * Callers:
 *     sub_18001B620 @ 0x18001B620 (sub_18001B620.c)
 *     sub_18001B6E0 @ 0x18001B6E0 (sub_18001B6E0.c)
 *     sub_18001B7A0 @ 0x18001B7A0 (sub_18001B7A0.c)
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

_DWORD *__fastcall sub_18001AFD0(_DWORD *a1, char a2)
{
  *(_QWORD *)a1 = &off_180020E48;
  a1[4] = -1073741823;
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    j_free(a1);
  return a1;
}

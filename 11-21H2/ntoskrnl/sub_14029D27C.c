/*
 * XREFs of sub_14029D27C @ 0x14029D27C
 * Callers:
 *     sub_14029D204 @ 0x14029D204 (sub_14029D204.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14029D27C(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && ((unsigned int)(*a1 - *a2) <= 0x200 || (unsigned int)(*a2 - *a1) <= 0x200);
}

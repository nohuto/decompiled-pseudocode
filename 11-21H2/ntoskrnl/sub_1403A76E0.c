/*
 * XREFs of sub_1403A76E0 @ 0x1403A76E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403A76E0(_DWORD *a1, _DWORD *a2)
{
  return (__PAIR64__(a1[3] > a2[3], a1[3]) - (unsigned int)a2[3]) >> 32;
}

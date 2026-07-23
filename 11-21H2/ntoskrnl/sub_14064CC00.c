/*
 * XREFs of sub_14064CC00 @ 0x14064CC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14064CC00(_DWORD *a1, _DWORD *a2)
{
  return (__PAIR64__(a1[5] > a2[5], a1[5]) - (unsigned int)a2[5]) >> 32;
}

/*
 * XREFs of sub_1403CB330 @ 0x1403CB330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403CB330(unsigned int *a1, _WORD *a2, unsigned __int8 a3)
{
  unsigned __int16 v3; // ax

  *a1 ^= (a3 ^ (unsigned __int8)*a1) & 0xFC;
  __outdword(0xCF8u, *a1);
  v3 = __inword((a3 & 3) + 3324);
  *a2 = v3;
  return 2LL;
}

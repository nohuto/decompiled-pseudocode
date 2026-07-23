/*
 * XREFs of sub_14098C27C @ 0x14098C27C
 * Callers:
 *     sub_14098C2AC @ 0x14098C2AC (sub_14098C2AC.c)
 *     sub_14098C45C @ 0x14098C45C (sub_14098C45C.c)
 * Callees:
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 */

LONG __fastcall sub_14098C27C(void *a1)
{
  LONG result; // eax

  _m_prefetchw(a1);
  result = _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
  if ( (result & 0x40) != 0 )
    return sub_14081CF98(7);
  return result;
}

/*
 * XREFs of HUBHSM_CheckOverCurrentBit @ 0x1C0008770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_CheckOverCurrentBit(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 780LL) & 2) != 0 ? 2041 : 2057;
}

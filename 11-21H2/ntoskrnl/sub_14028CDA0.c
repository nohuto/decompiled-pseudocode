/*
 * XREFs of sub_14028CDA0 @ 0x14028CDA0
 * Callers:
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_140693D80 @ 0x140693D80 (sub_140693D80.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 * Callees:
 *     sub_1406FEC90 @ 0x1406FEC90 (sub_1406FEC90.c)
 *     sub_1406FECE0 @ 0x1406FECE0 (sub_1406FECE0.c)
 */

__int64 __fastcall sub_14028CDA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 1120) & 0x10) != 0 )
    sub_1406FECE0(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), v2);
  return sub_1406FEC90(a1, a2);
}

/*
 * XREFs of PsMakeSiloContextPermanent @ 0x140690B00
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 * Callees:
 *     sub_140690B2C @ 0x140690B2C (sub_140690B2C.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1496);
  else
    v1 = qword_140D32A90;
  return sub_140690B2C(v1);
}

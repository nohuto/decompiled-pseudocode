/*
 * XREFs of sub_1403DCBDC @ 0x1403DCBDC
 * Callers:
 *     sub_1403DCAD0 @ 0x1403DCAD0 (sub_1403DCAD0.c)
 *     sub_1405DDFFC @ 0x1405DDFFC (sub_1405DDFFC.c)
 *     sub_1405DE108 @ 0x1405DE108 (sub_1405DE108.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403DCBDC(PVOID *P, int a2)
{
  _m_prefetchw(P + 29);
  if ( _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2 )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}

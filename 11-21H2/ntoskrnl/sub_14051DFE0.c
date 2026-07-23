/*
 * XREFs of sub_14051DFE0 @ 0x14051DFE0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 *     sub_14051DF24 @ 0x14051DF24 (sub_14051DF24.c)
 */

__int64 __fastcall sub_14051DFE0(ULONG_PTR a1, unsigned int a2)
{
  sub_14051DF24(a1, 0LL);
  return PoFxCompleteIdleCondition(*(_QWORD *)(a1 + 352), a2);
}

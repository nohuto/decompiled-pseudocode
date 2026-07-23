/*
 * XREFs of HalpPeiInterruptHandler @ 0x140519110
 * Callers:
 *     <none>
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14033575C (HalpCheckAndReportGhes.c)
 */

char __fastcall HalpPeiInterruptHandler(__int64 a1, __int64 a2)
{
  if ( HalpGenericPeiInitDone && a2 )
    HalpCheckAndReportGhes(a2);
  return 1;
}

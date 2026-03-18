/*
 * XREFs of HalpPeiInterruptHandler @ 0x140518BC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCheckAndReportGhes @ 0x1403354CC (HalpCheckAndReportGhes.c)
 */

char __fastcall HalpPeiInterruptHandler(__int64 a1, __int64 a2)
{
  if ( HalpGenericPeiInitDone && a2 )
    HalpCheckAndReportGhes(a2);
  return 1;
}

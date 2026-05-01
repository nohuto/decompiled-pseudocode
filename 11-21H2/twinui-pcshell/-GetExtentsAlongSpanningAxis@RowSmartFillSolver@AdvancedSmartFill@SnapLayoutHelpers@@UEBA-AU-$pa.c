/*
 * XREFs of ?GetExtentsAlongSpanningAxis@RowSmartFillSolver@AdvancedSmartFill@SnapLayoutHelpers@@UEBA?AU?$pair@JJ@std@@PEBUtagRECT@@@Z @ 0x180186670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SnapLayoutHelpers::AdvancedSmartFill::RowSmartFillSolver::GetExtentsAlongSpanningAxis(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  *a2 = *a3;
  a2[1] = a3[2];
  return a2;
}

/*
 * XREFs of ??1?$unique_ptr@VColumnSnapLayout@@U?$default_delete@VColumnSnapLayout@@@std@@@std@@QEAA@XZ @ 0x18067EBE0
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F050 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x18067EC10 (--_ESnapLayoutBase@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<ColumnSnapLayout>::~unique_ptr<ColumnSnapLayout>(SnapLayoutBase **a1)
{
  SnapLayoutBase *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return SnapLayoutBase::`vector deleting destructor'(v1, 1u);
  return result;
}

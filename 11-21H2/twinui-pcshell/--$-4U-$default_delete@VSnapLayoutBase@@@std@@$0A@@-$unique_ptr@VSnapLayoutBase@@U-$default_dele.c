/*
 * XREFs of ??$?4U?$default_delete@VSnapLayoutBase@@@std@@$0A@@?$unique_ptr@VSnapLayoutBase@@U?$default_delete@VSnapLayoutBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805ABAC0
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC170 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x180592100 (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<SnapLayoutBase>::operator()((__int64)a1, v4);
  }
  return a1;
}

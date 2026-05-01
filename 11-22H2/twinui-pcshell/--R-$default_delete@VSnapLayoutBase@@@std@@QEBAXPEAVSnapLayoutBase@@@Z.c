/*
 * XREFs of ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x18065F850
 * Callers:
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x18065F604 (--1SnapLayoutProvider@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@VSnapLayoutBase@@@std@@$0A@@?$unique_ptr@VSnapLayoutBase@@U?$default_delete@VSnapLayoutBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18067EBA8 (--$-4U-$default_delete@VSnapLayoutBase@@@std@@$0A@@-$unique_ptr@VSnapLayoutBase@@U-$default_dele.c)
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F050 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x18067FA84 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<SnapLayoutBase>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}

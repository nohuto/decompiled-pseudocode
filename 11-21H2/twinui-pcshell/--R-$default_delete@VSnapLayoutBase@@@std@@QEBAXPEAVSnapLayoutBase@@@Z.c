/*
 * XREFs of ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x180592100
 * Callers:
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x180591E5C (--1SnapLayoutProvider@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@VSnapLayoutBase@@@std@@$0A@@?$unique_ptr@VSnapLayoutBase@@U?$default_delete@VSnapLayoutBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805ABAC0 (--$-4U-$default_delete@VSnapLayoutBase@@@std@@$0A@@-$unique_ptr@VSnapLayoutBase@@U-$default_dele.c)
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC170 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1805ACD48 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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

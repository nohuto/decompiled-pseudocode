/*
 * XREFs of ??0?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z @ 0x1806705A4
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x180670EA8 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 *     ?WithRule@FillCandidate@SnapLayoutHelpers@@QEAA?AU12@W4FillRule@2@@Z @ 0x180674348 (-WithRule@FillCandidate@SnapLayoutHelpers@@QEAA-AU12@W4FillRule@2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}

/*
 * XREFs of ?WithRule@FillCandidate@SnapLayoutHelpers@@QEAA?AU12@W4FillRule@2@@Z @ 0x180674348
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x180670EA8 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 * Callees:
 *     ??0?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z @ 0x1806705A4 (--0-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::FillCandidate::WithRule(__int64 a1, __int64 a2, int a3)
{
  wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>(
    (_QWORD *)a2,
    *(_QWORD *)a1);
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  return a2;
}

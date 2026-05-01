/*
 * XREFs of ?WithRule@FillCandidate@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AU123@W4FillRule@3@@Z @ 0x1805A7614
 * Callers:
 *     ?DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@2@@ZP6A_N00PEAW452@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@12@@Z @ 0x1805A29A8 (-DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV.c)
 * Callees:
 *     ??0?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z @ 0x1805A1944 (--0-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISnappedWindow@@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::FillCandidate::WithRule(__int64 a1, __int64 a2, int a3)
{
  wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>(
    (_QWORD *)a2,
    *(_QWORD *)a1);
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  return a2;
}

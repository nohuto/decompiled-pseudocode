/*
 * XREFs of ?CalculateSnapRegion@ColumnSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ABD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805A4E04 (-GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805A5C18 (-GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUI.c)
 */

__int64 __fastcall ColumnSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  void **v5; // rsi
  int *v6; // rdi
  bool v8; // zf
  struct tagRECT *v9; // rdx
  int SmartFillRect; // eax
  struct tagRECT *RectForColumn; // rax
  unsigned __int64 v12; // xmm0_8
  struct tagRECT v13; // xmm0
  LONG v14; // eax
  LONG v15; // eax
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-40h]
  int v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+28h] [rbp-38h]
  struct tagRECT v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v5 = a5;
  v6 = (int *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)a2 = 0;
  v8 = *((_BYTE *)v5 + 36) == 0;
  v9 = (struct tagRECT *)*((unsigned int *)v5 + 4);
  v20 = 0LL;
  if ( v8 )
  {
    RectForColumn = SnapLayoutHelpers::AdvancedSmartFill::GetRectForColumn(
                      &v20,
                      v9,
                      (const struct Geometry::CRect *)(a4 + 8),
                      (const struct Geometry::CRect *)*(unsigned int *)(a4 + 40));
    v12 = _mm_srli_si128(*(__m128i *)RectForColumn, 8).m128i_u64[0];
    *(_QWORD *)&v20.left = *(_QWORD *)&RectForColumn->left;
    *(_QWORD *)&v20.right = v12;
    v13 = v20;
    *(struct tagRECT *)v6 = v20;
    v20 = v13;
  }
  else
  {
    a5 = &SnapLayoutHelpers::AdvancedSmartFill::ColumnSmartFillSolver::`vftable';
    SmartFillRect = SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetSmartFillRect(
                      (void (__fastcall ***)(_QWORD, unsigned int *, __int64))&a5,
                      (int)v9,
                      a3,
                      *(SnapLayoutHelpers **)a4,
                      v17,
                      v19,
                      a4 + 48,
                      v6,
                      &v20);
    if ( SmartFillRect < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x65,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)SmartFillRect,
        v18);
  }
  v14 = *((_DWORD *)v5 + 10);
  if ( v20.left - 1 >= v14 )
    v14 = v20.left - 1;
  v20.left = v14;
  v15 = *((_DWORD *)v5 + 12);
  if ( v15 >= v20.right + 1 )
    v15 = v20.right + 1;
  v20.right = v15;
  result = a2;
  *(struct tagRECT *)(a2 + 20) = v20;
  return result;
}
